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

		\time 4/4
		\clef "treble"
		\key e \major

		R1*2  |
		r2 gs' 4 a'  |
		gs' 2. ( e' 8 ) fs' ~  |
%% 5
		fs' 2 gs' 4 a'  |
		gs' 2. ( e' 8 ) cs' ~  |
		cs' 2 r4 r8 cs'  |
		cs' 8 cs' cs' cs' cs' cs' cs' ds' ~  |
		ds' 8 ds' 4 ds' 8 ds' 4 ds'  |
%% 10
		d' 1 ~  |
		d' 4 r gs' a'  |
		gs' 2. ( e' 8 ) fs' ~  |
		fs' 2 gs' 4 a'  |
		gs' 2. ( e' 8 ) cs' ~  |
%% 15
		cs' 2 r4 r8 cs'  |
		cs' 8 cs' cs' cs' cs' cs' cs' ds' ~  |
		ds' 8 ds' 4 ds' 8 ds' 4 ds'  |
		b 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "mezzosoprano" \new Lyrics \lyricmode {
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
