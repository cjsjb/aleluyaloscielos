\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "mezzosoprano" {
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
		gis' 2. ( e' 8 ) cis' ~  |
		cis' 2 r4 r8 cis'  |
		cis' 8 cis' cis' cis' cis' cis' cis' dis' ~  |
		dis' 8 dis' 4 dis' 8 dis' 4 dis'  |
%% 10
		d' 1 ~  |
		d' 4 r gis' a'  |
		gis' 2. ( e' 8 ) fis' ~  |
		fis' 2 gis' 4 a'  |
		gis' 2. ( e' 8 ) cis' ~  |
%% 15
		cis' 2 r4 r8 cis'  |
		cis' 8 cis' cis' cis' cis' cis' cis' dis' ~  |
		dis' 8 dis' 4 dis' 8 dis' 4 dis'  |
		b 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "mezzosoprano" {
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
