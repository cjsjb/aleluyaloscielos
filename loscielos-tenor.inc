\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "treble_8"
		\key e \major
		R1*2  |
		r2 gis 4 a  |
		gis 2. ( e 8 ) fis ~  |
%% 5
		fis 2 gis 4 a  |
		gis 2. ( e 8 ) e ~  |
		e 2 r4 r8 cis  |
		e 8 cis e cis e cis e a ~  |
		a 8 a 4 a 8 gis 4 e  |
%% 10
		fis 1 ~  |
		fis 4 r gis a  |
		gis 2. ( e 8 ) fis ~  |
		fis 2 gis 4 a  |
		gis 2. ( e 8 ) e ~  |
%% 15
		e 2 r4 r8 cis  |
		e 8 cis e cis e cis e a ~  |
		a 8 a 4 a 8 gis 4 e  |
		e 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "tenor" {
		¡A -- le -- lu __ ya,
		a -- le -- lu __ ya!
		Los cie -- los y la tie -- rra te can -- tan,
		¡a -- le -- lu -- ya!

		¡A -- le -- lu __ ya,
		a -- le -- lu __ ya!
		Los cie -- los y la tie -- rra te can -- tan,
		¡a -- le -- lu -- ya!
	}

>>
