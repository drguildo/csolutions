enum Piece {
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

enum Color {
    BLACK,
    WHITE
};

struct Square {
    enum Piece p;
    enum Color c;
};

struct Square board[8][8];

int main(void) {
    return 0;
}
