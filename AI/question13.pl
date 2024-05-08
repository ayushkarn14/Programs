% Define the grammar rules
s --> [].
s --> [a], s, [b].

% Entry point for parsing
parse(Input) :- phrase(s, Input).

% Example usage:
% ?- parse([a, a, b, b]).
% true.
% ?- parse([a, b, a, b]).
% false.
