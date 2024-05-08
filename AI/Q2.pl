% hill_climb_search(State, Solution)
hill_climb_search(State, []) :-
    goal(State).

hill_climb_search(State, [Move|Moves]) :-
    move(State, Move),
    update(State, Move, NewState),
    hill_climb_search(NewState, Moves).

% Define the goal state
goal(State) :-
    % Define your goal condition here
    % For example:
    State = [5, 5, 5].

% Define the possible moves from a given state
move(State, [X, Y, Z]) :-
    % Define your moves here
    % For example, change one of the values by +/- 1
    member(X, [-1, 0, 1]), % move value X by -1, 0, or 1
    member(Y, [-1, 0, 1]), % move value Y by -1, 0, or 1
    member(Z, [-1, 0, 1]), % move value Z by -1, 0, or 1
    (X \= 0 ; Y \= 0 ; Z \= 0). % at least one value must change

% Define how to update the state based on the move
update([A, B, C], [X, Y, Z], [NewA, NewB, NewC]) :-
    NewA is A + X,
    NewB is B + Y,
    NewC is C + Z.

% Example usage:
% To run the program, call hill_climb_search with the initial state:
% ?- hill_climb_search([0, 0, 0], Solution).
