#include "Sierpinski.h"
#include "error.h"
using namespace std;

/**
 * Draws a triangle with the specified corners in the specified window. Feel free
 * to edit this function as you see fit to change things like color, fill style,
 * etc. in whatever way you'd like!
 *
 * @param window The window in which to draw the triangle.
 * @param x0 y0 The first corner of the triangle.
 * @param x1 y1 The second corner of the triangle.
 * @param x2 y2 The third corner of the triangle.
 */
void drawTriangle(GWindow& window,
                  double x0, double y0,
                  double x1, double y1,
                  double x2, double y2) {
    window.setColor("black");
    window.fillPolygon({ x0, y0, x1, y1, x2, y2 });
}

/* TODO: Refer to Sierpinski.h for more information about what this function should do.
 * Then, delete this comment.
 */
void drawSierpinskiTriangle(GWindow& window,
                            double x0, double y0,
                            double x1, double y1,
                            double x2, double y2,
                            int order) {
    /* TODO: Delete this comment, these next lines of code, and implement this function. */
    if (order < 0) {
        error("The order must be greater than or equal to 0!");
    }

    if (order == 0) {
        drawTriangle(window, x0, y0, x1, y1, x2, y2);
    } else {
        double x_mid0 = (x0 + x1) / 2;
        double y_mid0 = (y0 + y1) / 2;
        double x_mid1 = (x0 + x2) / 2;
        double y_mid1 = (y0 + y2) / 2;
        double x_mid2 = (x1 + x2) / 2;
        double y_mid2 = (y1 + y2) / 2;
        order--;

        drawSierpinskiTriangle(window, x0, y0, x_mid0, y_mid0, x_mid1, y_mid1, order);
        drawSierpinskiTriangle(window, x_mid0, y_mid0, x1, y1, x_mid2, y_mid2, order);
        drawSierpinskiTriangle(window, x_mid1, y_mid1, x_mid2, y_mid2, x2, y2, order);
    }
}
