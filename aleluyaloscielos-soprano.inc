\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "treble"
		\key e \major
		R1*2  |
		r2 gis' 4 a'  |
		gis' 2. ( e' 8 ) fis' ~  |
%% 5
		fis' 2 gis' 4 a'  |
		gis' 2. ( e' 8 ) a' ~  |
		a' 2 r4 r8 a'  |
		a' 8 a' a' a' a' a' a' b' ~  |
		b' 8 b' 4 b' 8 b' 4 b'  |
%% 10
		a' 1 ~  |
		a' 4 r gis' a'  |
		gis' 2. ( e' 8 ) fis' ~  |
		fis' 2 gis' 4 a'  |
		gis' 2. ( e' 8 ) a' ~  |
%% 15
		a' 2 r4 r8 a'  |
		a' 8 a' a' a' a' a' a' b' ~  |
		b' 8 b' 4 b' 8 b' 4 b'  |
		gis' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "soprano" {
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
