% Define the grammar rules
sentence(Tree) --> noun_phrase(NP), verb_phrase(VP), { Tree = s(NP, VP) }.
noun_phrase(Tree) --> article(A), noun(N), { Tree = np(A, N) }.
verb_phrase(Tree) --> verb(V), noun_phrase(NP), { Tree = vp(V, NP) }.

% Lexical items
article(the) --> [the].
article(a) --> [a].
noun(cat) --> [cat].
noun(dog) --> [dog].
noun(bird) --> [bird].
verb(chases) --> [chases].
verb(eats) --> [eats].
verb(sings) --> [sings].

% Entry point for parsing
parse(Tree, Sentence) :- sentence(Tree, Sentence, []).

% Example usage:
% ?- parse(Tree, [the, cat, chases, a, bird]).
% Tree = s(np(the, cat), vp(chases, np(a, bird))).