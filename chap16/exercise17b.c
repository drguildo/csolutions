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

int main(void) {
    return 0;
}
