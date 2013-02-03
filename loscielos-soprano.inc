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

		\time 4/4
		\clef "treble"
		\key e \major

		R1*2  |
		r2 gs' 4 a'  |
		gs' 2. ( e' 8 ) fs' ~  |
%% 5
		fs' 2 gs' 4 a'  |
		gs' 2. ( e' 8 ) a' ~  |
		a' 2 r4 r8 a'  |
		a' 8 a' a' a' a' a' a' b' ~  |
		b' 8 b' 4 b' 8 b' 4 b'  |
%% 10
		a' 1 ~  |
		a' 4 r gs' a'  |
		gs' 2. ( e' 8 ) fs' ~  |
		fs' 2 gs' 4 a'  |
		gs' 2. ( e' 8 ) a' ~  |
%% 15
		a' 2 r4 r8 a'  |
		a' 8 a' a' a' a' a' a' b' ~  |
		b' 8 b' 4 b' 8 b' 4 b'  |
		gs' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "soprano" \new Lyrics \lyricmode {
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
