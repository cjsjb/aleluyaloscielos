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

		\time 4/4
		\clef "treble_8"
		\key e \major

		R1*2  |
		r2 gs 4 a  |
		gs 2. ( e 8 ) fs ~  |
%% 5
		fs 2 gs 4 a  |
		gs 2. ( e 8 ) e ~  |
		e 2 r4 r8 cs  |
		e 8 cs e cs e cs e a ~  |
		a 8 a 4 a 8 gs 4 e  |
%% 10
		fs 1 ~  |
		fs 4 r gs a  |
		gs 2. ( e 8 ) fs ~  |
		fs 2 gs 4 a  |
		gs 2. ( e 8 ) e ~  |
%% 15
		e 2 r4 r8 cs  |
		e 8 cs e cs e cs e a ~  |
		a 8 a 4 a 8 gs 4 e  |
		e 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "tenor" \new Lyrics \lyricmode {
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
