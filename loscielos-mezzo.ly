\include "english.ly"
\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Aleluya"
	subtitle = "Los cielos y la tierra"
	instrument = "Mezzosoprano"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
}
globalTempo = {
	\tempo 4 = 130
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "loscielos-acordes.inc"
		\include "loscielos-mezzo.inc"

	>>

	\layout {
		\context { \RemoveEmptyStaffContext }
	}
}
