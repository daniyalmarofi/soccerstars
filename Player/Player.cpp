#include "Player.hpp"

Player::Player(int x, int y, std::string image_dir) {
    position = Point(x, y);
    player_image = image_dir;
}

void Player::draw(Window *win) { win->draw_img(player_image, get_box()); }

Rectangle Player::get_box() {
    Point top_left(position.x - PLAYER_SIZE, position.y - PLAYER_SIZE);
    Point bottom_right(position.x + PLAYER_SIZE, position.y + PLAYER_SIZE);
    Rectangle box(top_left, bottom_right);
    return box;
}