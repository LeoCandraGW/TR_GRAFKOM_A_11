#include<windows.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Leo Candra GW - 672018073");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

    //Bewah
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.7,0.3);
    glVertex3f(-100, 0, -40);
    glVertex3f(80, 0, -40);
    glVertex3f(80, 0, 60);
    glVertex3f(-100, 0, 60);
    glEnd();
    
    //Bewah
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(-60, 0.1, 2);
    glVertex3f(15, 0.1, 2);
    glVertex3f(18, 0.1, 20);
    glVertex3f(-60, 0.1, 20);
    glEnd();
    
    //Bewah
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(18, 0.1, 20);
    glVertex3f(18, 0.1, 60);
    glVertex3f(0, 0.1, 60);
    glVertex3f(0, 0.1, 20);
    glEnd();
    
    //Bewah
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(-60, 0.1, 20);
    glVertex3f(-40, 0.1, 20);
    glVertex3f(-35, 0.1, 60);
    glVertex3f(-55, 0.1, 60);
    glEnd();
    
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(0, 10, -2);
    glVertex3f(7, 10, -2);
    glVertex3f(7, 0, -2);
    glVertex3f(0, 0, -2);
    glEnd();
    
    //depan1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex3f(2, 7, -1.9);
    glVertex3f(5, 7, -1.9);
    glVertex3f(5, 0, -1.9);
    glVertex3f(2, 0, -1.9);
    glEnd();
    
    //depan kanan
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(7, 0, -8);
    glVertex3f(7, 10, -8);
    glVertex3f(7, 10, -2);
    glVertex3f(7, 0, -2);
    glEnd();
    
    //depan kiri
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(0, 0, -8);
    glVertex3f(0, 10, -8);
    glVertex3f(0, 10, -2);
    glVertex3f(0, 0, -2);
    glEnd();
    
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4);
    glVertex3f(0, 10, -8);
    glVertex3f(7, 10, -8);
    glVertex3f(7, 0, -8);
    glVertex3f(0, 0, -8);
    glEnd();
    
    //atas
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(-0.5, 13, -8.5);
    glVertex3f(7.5, 13, -8.5);
    glVertex3f(7.5, 13, -1.5);
    glVertex3f(-0.5, 13, -1.5);
    glEnd();
    
    //depan1
    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(0, 25, -2);
    glVertex3f(7, 25, -2);
    glVertex3f(7, 10, -2);
    glVertex3f(0, 10, -2);
    glEnd();
    
    //depan1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0.);
    glVertex3f(2.5, 17, -1.9);
    glVertex3f(4.5, 17, -1.9);
    glVertex3f(4.5, 10, -1.9);
    glVertex3f(2.5, 10, -1.9);
    glEnd();
    
    //depan1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0.);
    glVertex3f(2.5, 23, -1.9);
    glVertex3f(3, 23, -1.9);
    glVertex3f(3, 18, -1.9);
    glVertex3f(2.5, 18, -1.9);
    glEnd();
    
    //depan1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0.);
    glVertex3f(4, 23, -1.9);
    glVertex3f(4.5, 23, -1.9);
    glVertex3f(4.5, 18, -1.9);
    glVertex3f(4, 18, -1.9);
    glEnd();
    
    //depan kanan1
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.1, 0.1);
    glVertex3f(7, 10, -8);
    glVertex3f(7, 25, -8);
    glVertex3f(7, 25, -2);
    glVertex3f(7, 10, -2);
    glEnd();
    
    //depan kiri1
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.1, 0.1);
    glVertex3f(0, 10, -8);
    glVertex3f(0, 25, -8);
    glVertex3f(0, 25, -2);
    glVertex3f(0, 10, -2);
    glEnd();
    
    //belakang1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0, 0.1);
    glVertex3f(0, 25, -8);
    glVertex3f(7, 25, -8);
    glVertex3f(7, 10, -8);
    glVertex3f(0, 10, -8);
    glEnd();
    
    //atas1
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(-0.8, 25, -8.8);
    glVertex3f(7.8, 25, -8.8);
    glVertex3f(7.8, 25, -1.2);
    glVertex3f(-0.8, 25, -1.2);
    glEnd();
    
    //kubah1
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(2.5, 30, -2.5);
    glVertex3f(4.5, 30, -2.5);
    glVertex3f(4.5, 25, -2.5);
    glVertex3f(2.5, 25, -2.5);
    glEnd();
    
    //kubah1.2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex3f(3, 28.5, -2.4);
    glVertex3f(4, 28.5, -2.4);
    glVertex3f(4, 25, -2.4);
    glVertex3f(3, 25, -2.4);
    glEnd();
    
    //kubah2
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(4.5, 30, -2.5);
    glVertex3f(6, 30, -4);
    glVertex3f(6, 25, -4);
    glVertex3f(4.5, 25, -2.5);
    glEnd();
    
    
    //kubah3
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(6, 30, -4);
    glVertex3f(6, 30, -6);
    glVertex3f(6, 25, -6);
    glVertex3f(6, 25, -4);
    glEnd();
    
    //kubah4
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(6, 30, -6);
    glVertex3f(4.5, 30, -7.5);
    glVertex3f(4.5, 25, -7.5);
    glVertex3f(6, 25, -6);
    glEnd();
    
    //kubah5
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(2.5, 30, -7.5);
    glVertex3f(4.5, 30, -7.5);
    glVertex3f(4.5, 25, -7.5);
    glVertex3f(2.5, 25, -7.5);
    glEnd();
    
    //kubah6
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(2.5, 30, -7.5);
    glVertex3f(1, 30, -6);
    glVertex3f(1, 25, -6);
    glVertex3f(2.5, 25, -7.5);
    glEnd();
    
    //kubah7
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(1, 30, -4);
    glVertex3f(1, 30, -6);
    glVertex3f(1, 25, -6);
    glVertex3f(1, 25, -4);
    glEnd();
    
    //kubah8
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(1, 30, -4);
    glVertex3f(2.5, 30, -2.5);
    glVertex3f(2.5, 25, -2.5);
    glVertex3f(1, 25, -4);
    glEnd();
    
    //kubah atap1
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(2.9, 33, -3.7);
    glVertex3f(4.1, 33, -3.7);
    glVertex3f(4.5, 30, -2.5);
    glVertex3f(2.5, 30, -2.5);
    glEnd();
    
    //kubah atap1.2
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(4.1, 33, -3.7);
    glVertex3f(2.9, 33, -3.7);
    glEnd();
    
    //kubah atap2
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(4.1, 33, -3.7);
    glVertex3f(5.1, 33, -4.5);
    glVertex3f(6, 30, -4);
    glVertex3f(4.5, 30, -2.5);
    glEnd();
    
    //kubah atap2.2
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(5.1, 33, -4.5);
    glVertex3f(4.1, 33, -3.7);
    glEnd();
    
    //kubah atap3
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(5.1, 33, -4.5);
    glVertex3f(5.1, 33, -5.8);
    glVertex3f(6, 30, -6);
    glVertex3f(6, 30, -4);
    glEnd();
    
    //kubah atap3.2
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(5.1, 33, -5.8);
    glVertex3f(5.1, 33, -4.5);
    glEnd();
    
    //kubah atap4
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(5.1, 33, -5.8);
    glVertex3f(4.3, 33, -6.9);
    glVertex3f(4.5, 30, -7.5);
    glVertex3f(6, 30, -6);
    glEnd();
    
    //kubah atap4.2
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(4.3, 33, -6.9);
    glVertex3f(5.1, 33, -5.8);
    glEnd();
    
    //kubah atap5
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(2.9, 33, -6.9);
    glVertex3f(4.3, 33, -6.9);
    glVertex3f(4.5, 30, -7.5);
    glVertex3f(2.5, 30, -7.5);
    glEnd();
    
    //kubah atap5
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(4.3, 33, -6.9);
    glVertex3f(2.9, 33, -6.9);
    glEnd();
    
    //kubah atap6
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(2.9, 33, -6.9);
    glVertex3f(2, 33, -5.8);
    glVertex3f(1, 30, -6);
    glVertex3f(2.5, 30, -7.5);
    glEnd();
    
    //kubah atap6.2
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(2, 33, -5.8);
    glVertex3f(2.9, 33, -6.9);
    glEnd();
    
    //kubah atap7
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(2, 33, -4.5);
    glVertex3f(2, 33, -5.8);
    glVertex3f(1, 30, -6);
    glVertex3f(1, 30, -4);
    glEnd();
    
    //kubah atap7.2
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(2, 33, -5.8);
    glVertex3f(2, 33, -4.5);
    glEnd();
    
    //kubah atap8
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.6, 0.3);
    glVertex3f(2, 33, -4.5);
    glVertex3f(2.9, 33, -3.7);
    glVertex3f(2.5, 30, -2.5);
    glVertex3f(1, 30, -4);
    glEnd();
    
    //kubah atap8.2
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3, 0.1);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(3.5, 37.5, -5.5);
    glVertex3f(2.9, 33, -3.7);
    glVertex3f(2, 33, -4.5);
    glEnd();
    
    //bangunan belakang1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.8);
    glVertex3f(-6, 10, -17);
    glVertex3f(-6, 0, -17);
    glVertex3f(-6, 0, -9);
    glVertex3f(-6, 10, -9);
    glEnd();
    
    //bangunan belakang1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex3f(-6.1, 7, -15);
    glVertex3f(-6.1, 0, -15);
    glVertex3f(-6.1, 0, -12);
    glVertex3f(-6.1, 7, -12);
    glEnd();
    
    //bangunan belakang2
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.6);
    glVertex3f(-6, 0, -9);
    glVertex3f(10, 0, -9);
    glVertex3f(10, 10, -9);
    glVertex3f(-6, 10, -9);
    glEnd();
    
    //bangunan belakang3
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.8);
    glVertex3f(10, 0, -9);
    glVertex3f(10, 0, -5);
    glVertex3f(10, 10, -5);
    glVertex3f(10, 10, -9);
    glEnd();
    
    //bangunan belakang4
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.6);
    glVertex3f(10, 0, -5);
    glVertex3f(16, 0, -5);
    glVertex3f(16, 10, -5);
    glVertex3f(10, 10, -5);
    glEnd();
    
    //bangunan belakang4
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex3f(12, 0, -4.9);
    glVertex3f(14, 0, -4.9);
    glVertex3f(14, 7, -4.9);
    glVertex3f(12, 7, -4.9);
    glEnd();
    
    //bangunan belakang5
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.8);
    glVertex3f(16, 0, -9);
    glVertex3f(16, 0, -5);
    glVertex3f(16, 10, -5);
    glVertex3f(16, 10, -9);
    glEnd();
    
    //bangunan belakang6
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.6);
    glVertex3f(16, 0, -9);
    glVertex3f(24, 0, -9);
    glVertex3f(24, 10, -9);
    glVertex3f(16, 10, -9);
    glEnd();
    
    //bangunan belakang7
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.8);
    glVertex3f(24, 10, -17);
    glVertex3f(24, 0, -17);
    glVertex3f(24, 0, -9);
    glVertex3f(24, 10, -9);
    glEnd();
    
    //bangunan belakang9
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(-6, 0, -17);
    glVertex3f(24, 0, -17);
    glVertex3f(24, 10, -17);
    glVertex3f(-6, 10, -17);
    glEnd();
    
    //bangunan belakang10
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1,0.1);
    glVertex3f(-6, 10, -17);
    glVertex3f(24, 10, -17);
    glVertex3f(24, 20, -13);
    glVertex3f(-6, 20, -13);
    glEnd();
    
    //bangunan belakang11
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2,0.2);
    glVertex3f(-6, 10, -9);
    glVertex3f(24, 10, -9);
    glVertex3f(24, 20, -13);
    glVertex3f(-6, 20, -13);
    glEnd();
    
    //bangunan belakang12
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1,0.1);
    glVertex3f(10, 10, -9);
    glVertex3f(13, 20, -13);
    glVertex3f(13, 20, -5);
    glVertex3f(10, 10, -5);
    glEnd();
    
    //bangunan belakang13
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2,0.2);
    glVertex3f(16, 10, -9);
    glVertex3f(13, 20, -13);
    glVertex3f(13, 20, -5);
    glVertex3f(16, 10, -5);
    glEnd();
    
    //bangunan belakang14
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(10, 10, -5);
    glVertex3f(13, 20, -5);
    glVertex3f(13, 20, -5);
    glVertex3f(16, 10, -5);
    glEnd();
    
    //bangunan belakang15
    glBegin(GL_QUADS);
    glColor3f(1, 1,1);
    glVertex3f(-6, 10, -17);
    glVertex3f(-6, 20, -13);
    glVertex3f(-6, 20, -13);
    glVertex3f(-6, 10, -9);
    glEnd();
    
    //bangunan belakang16
    glBegin(GL_QUADS);
    glColor3f(1, 1,1);
    glVertex3f(24, 10, -17);
    glVertex3f(24, 20, -13);
    glVertex3f(24, 20, -13);
    glVertex3f(24, 10, -9);
    glEnd();
    
    //bangunan 2 belakang1
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7,0.7);
    glVertex3f(-6, 0, -6);
    glVertex3f(-10, 0, -6);
    glVertex3f(-10, 7, -6);
    glVertex3f(-6, 7, -6);
    glEnd();
    
    //bangunan 2 belakang2
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.6);
    glVertex3f(-10, 0, -6);
    glVertex3f(-10, 0, -10);
    glVertex3f(-10, 7, -10);
    glVertex3f(-10, 7, -6);
    glEnd();
    
    //bangunan 2 belakang2
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex3f(-10.1, 0, -7);
    glVertex3f(-10.1, 0, -9);
    glVertex3f(-10.1, 5, -9);
    glVertex3f(-10.1, 5, -7);
    glEnd();
    
    //bangunan 2 belakang3
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.6);
    glVertex3f(-6, 0, -10);
    glVertex3f(-10, 0, -10);
    glVertex3f(-10, 7, -10);
    glVertex3f(-6, 7, -10);
    glEnd();
    
    //bangunan 2 belakang4
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5,0.5);
    glVertex3f(-6, 0, -6);
    glVertex3f(-6, 0, -10);
    glVertex3f(-6, 7, -10);
    glVertex3f(-6, 7, -6);
    glEnd();
    
    //bangunan 2 belakang5
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(-10, 7, -6);
    glVertex3f(-10, 7, -10);
    glVertex3f(-6, 13, -10);
    glVertex3f(-6, 13, -6);
    glEnd();
    
    //bangunan 2 belakang6
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4,0.4);
    glVertex3f(-10, 7, -6);
    glVertex3f(-10, 7, -6);
    glVertex3f(-6, 13, -6);
    glVertex3f(-6, 7, -6);
    glEnd();
    
    //bangunan 2 belakang7
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2,0.2);
    glVertex3f(-10, 7, -10);
    glVertex3f(-10, 7, -10);
    glVertex3f(-6, 13, -10);
    glVertex3f(-6, 7, -10);
    glEnd();
    
    //bangunan 2 belakang8
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1,0.1);
    glVertex3f(-6, 7, -6);
    glVertex3f(-6, 13, -6);
    glVertex3f(-6, 13, -10);
    glVertex3f(-6, 7, -10);
    glEnd();
    
    //bangunan 3 belakang1
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1,0.1);
    glVertex3f(-6, 0, -16);
    glVertex3f(-10, 0, -16);
    glVertex3f(-10, 7, -16);
    glVertex3f(-6, 7, -16);
    glEnd();
    
    //bangunan 2 belakang2
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(-10, 0, -16);
    glVertex3f(-10, 0, -20);
    glVertex3f(-10, 7, -20);
    glVertex3f(-10, 7, -16);
    glEnd();
    
    //bangunan 2 belakang2
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex3f(-10.1, 0, -17);
    glVertex3f(-10.1, 0, -19);
    glVertex3f(-10.1, 5, -19);
    glVertex3f(-10.1, 5, -17);
    glEnd();
    
    //bangunan 2 belakang3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2,0.2);
    glVertex3f(-6, 0, -20);
    glVertex3f(-10, 0, -20);
    glVertex3f(-10, 7, -20);
    glVertex3f(-6, 7, -20);
    glEnd();
    
    //bangunan 2 belakang4
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4,0.4);
    glVertex3f(-6, 0, -16);
    glVertex3f(-6, 0, -20);
    glVertex3f(-6, 7, -20);
    glVertex3f(-6, 7, -16);
    glEnd();
    
    //bangunan 2 belakang5
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1,0.1);
    glVertex3f(-10, 7, -16);
    glVertex3f(-10, 7, -20);
    glVertex3f(-6, 13, -20);
    glVertex3f(-6, 13, -16);
    glEnd();
    
    //bangunan 2 belakang6
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3,0.3);
    glVertex3f(-10, 7, -16);
    glVertex3f(-10, 7, -16);
    glVertex3f(-6, 13, -16);
    glVertex3f(-6, 7, -16);
    glEnd();
    
    //bangunan 2 belakang7
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2,0.2);
    glVertex3f(-10, 7, -20);
    glVertex3f(-10, 7, -20);
    glVertex3f(-6, 13, -20);
    glVertex3f(-6, 7, -20);
    glEnd();
    
    //bangunan 2 belakang8
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5,0.5);
    glVertex3f(-6, 7, -16);
    glVertex3f(-6, 13, -16);
    glVertex3f(-6, 13, -20);
    glVertex3f(-6, 7, -20);
    glEnd();
    
    //bangunan 3 belakang1
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.2,0.2);
    glVertex3f(-4, 10, -19);
    glVertex3f(3, 10, -19);
    glVertex3f(3, 0, -19);
    glVertex3f(-4, 0, -19);
    glEnd();
    
    //bangunan 3 belakang2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.2,0.2);
    glVertex3f(3, 0, -26);
    glVertex3f(3, 10, -26);
    glVertex3f(3, 10, -19);
    glVertex3f(3, 0, -19);
    glEnd();
    
    //bangunan 3 belakang3
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.1,0.1);
    glVertex3f(-4, 0, -26);
    glVertex3f(-4, 10, -26);
    glVertex3f(-4, 10, -19);
    glVertex3f(-4, 0, -19);
    glEnd();
    
    //bangunan 3 belakang4
    glBegin(GL_QUADS);
    glColor3f(0.2 ,0.1,0.1);
    glVertex3f(-4, 10, -26);
    glVertex3f(3, 10, -26);
    glVertex3f(3, 0, -26);
    glVertex3f(-4, 0, -26);
    glEnd();
    
    //bangunan 3 belakang5
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.2,0.2);
    glVertex3f(-4, 26, -19);
    glVertex3f(3, 26, -19);
    glVertex3f(3, 10, -19);
    glVertex3f(-4, 10, -19);
    glEnd();
    
    //bangunan 3 belakang6
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.1,0.1);
    glVertex3f(3, 10, -26);
    glVertex3f(3, 26, -26);
    glVertex3f(3, 26, -19);
    glVertex3f(3, 10, -19);
    glEnd();
    
    //bangunan 3 belakang7
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3,0.3);
    glVertex3f(-4, 10, -26);
    glVertex3f(-4, 26, -26);
    glVertex3f(-4, 26, -19);
    glVertex3f(-4, 10, -19);
    glEnd();
    
    //bangunan 3 belakang8
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.1,0.1);
    glVertex3f(-4, 26, -26);
    glVertex3f(3, 26, -26);
    glVertex3f(3, 10, -26);
    glVertex3f(-4, 10, -26);
    glEnd();
    
    //bangunan 3 belakang atas
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(-5, 26,-27);
    glVertex3f(4, 26, -27);
    glVertex3f(4, 26, -18);
    glVertex3f(-5, 26, -18);
    glEnd();
    
    //bangunan 3 belakang1.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.6,0.2);
    glVertex3f(-3, 34, -20);
    glVertex3f(2, 34, -20);
    glVertex3f(2, 26, -20);
    glVertex3f(-3, 26, -20);
    glEnd();
    
    //bangunan 3 belakang2.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.5,0.2);
    glVertex3f(2, 26, -25);
    glVertex3f(2, 34, -25);
    glVertex3f(2, 34, -20);
    glVertex3f(2, 26, -20);
    glEnd();
    
    //bangunan 3 belakang3.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.4,0.2);
    glVertex3f(-3, 26, -25);
    glVertex3f(-3, 34, -25);
    glVertex3f(-3, 34, -20);
    glVertex3f(-3, 26, -20);
    glEnd();
    
    //bangunan 3 belakang4.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.6,0.2);
    glVertex3f(-3, 34, -25);
    glVertex3f(2, 34, -25);
    glVertex3f(2, 26, -25);
    glVertex3f(-3, 26, -25);
    glEnd();
    
    //bangunan 3 belakang atas
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(-3, 34,-25);
    glVertex3f(2, 34, -25);
    glVertex3f(2, 34, -20);
    glVertex3f(-3, 34, -20);
    glEnd();
    
    //bangunan 3 belakang atas
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex3f(-2, 38.1,-24);
    glVertex3f(1, 38.1, -24);
    glVertex3f(1, 38.1, -21);
    glVertex3f(-2, 38.1, -21);
    glEnd();
    
    //bangunan 4 belakang1.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.4,0.2);
    glVertex3f(-2, 38, -21);
    glVertex3f(1, 38, -21);
    glVertex3f(1, 34, -21);
    glVertex3f(-2, 34, -21);
    glEnd();
    
    //bangunan 4 belakang2.2
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.3,0.1);
    glVertex3f(1, 34, -24);
    glVertex3f(1, 38, -24);
    glVertex3f(1, 38, -21);
    glVertex3f(1, 34, -21);
    glEnd();
    
    //bangunan 4 belakang3.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.6,0.2);
    glVertex3f(-2, 34, -24);
    glVertex3f(-2, 38, -24);
    glVertex3f(-2, 38, -21);
    glVertex3f(-2, 34, -21);
    glEnd();
    
    //bangunan 4 belakang4.2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.4,0.2);
    glVertex3f(-2, 38, -24);
    glVertex3f(1, 38, -24);
    glVertex3f(1, 34, -24);
    glVertex3f(-2, 34, -24);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(30, 0, -5);
    glVertex3f(42, 0, -5);
    glVertex3f(42, 10, -5);
    glVertex3f(30, 10, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(30, 10, -5);
    glVertex3f(42, 10, -5);
    glVertex3f(35.7, 17, -5);
    glVertex3f(35.7, 17, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(35, 10, 37);
    glVertex3f(45, 10, 37);
    glVertex3f(38.9, 17, 37);
    glVertex3f(38.9, 17, 37);
    glEnd();
    
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(30, 0, -5);
    glVertex3f(31, 0, 4);
    glVertex3f(31, 10, 4);
    glVertex3f(30, 10, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(29.8, 5, -5);
    glVertex3f(30.5, 5, -2);
    glVertex3f(30.5, 7, -2);
    glVertex3f(29.8, 7, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(29.8, 2, -5);
    glVertex3f(30.5, 2, -2);
    glVertex3f(30.5, 4, -2);
    glVertex3f(29.8, 4, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(29.8, 5, -1);
    glVertex3f(30.5, 5, 2);
    glVertex3f(30.5, 7, 2);
    glVertex3f(29.8, 7, -1);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(29.8, 2, -1);
    glVertex3f(30.5, 2, 2);
    glVertex3f(30.5, 4, 2);
    glVertex3f(29.8, 4, -1);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.7,0.5 );
    glVertex3f(31, 0, 4);
    glVertex3f(18, 0, 4);
    glVertex3f(18, 10, 4);
    glVertex3f(31, 10, 4);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(18, 0, 4);
    glVertex3f(18, 0, 13);
    glVertex3f(18, 10, 13);
    glVertex3f(18, 10, 4);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(18, 10, 4);
    glVertex3f(18, 10, 13);
    glVertex3f(18, 17, 8.5);
    glVertex3f(18, 17, 8.5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(17.9, 7, 5);
    glVertex3f(17.9, 7, 7);
    glVertex3f(17.9, 9, 7);
    glVertex3f(17.9, 9, 5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(17.9, 4, 5);
    glVertex3f(17.9, 4, 7);
    glVertex3f(17.9, 6, 7);
    glVertex3f(17.9, 6, 5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(17.9, 7, 10);
    glVertex3f(17.9, 7, 12);
    glVertex3f(17.9, 9, 12);
    glVertex3f(17.9, 9, 10);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(17.9, 4, 10);
    glVertex3f(17.9, 4, 12);
    glVertex3f(17.9, 6, 12);
    glVertex3f(17.9, 6, 10);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(32, 0, 13);
    glVertex3f(18, 0, 13);
    glVertex3f(18, 10, 13);
    glVertex3f(32, 10, 13);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.7,0.5 );
    glVertex3f(32, 0, 13);
    glVertex3f(34, 0, 30);
    glVertex3f(34, 10, 30);
    glVertex3f(32, 10, 13);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(34, 0, 30);
    glVertex3f(25, 0, 30);
    glVertex3f(25, 10, 30);
    glVertex3f(34, 10, 30);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 7, 29.9);
    glVertex3f(26, 7, 29.9);
    glVertex3f(26, 9, 29.9);
    glVertex3f(28, 9, 29.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 4, 29.9);
    glVertex3f(26, 4, 29.9);
    glVertex3f(26, 6, 29.9);
    glVertex3f(28, 6, 29.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(32, 4, 29.9);
    glVertex3f(30, 4, 29.9);
    glVertex3f(30, 6, 29.9);
    glVertex3f(32, 6, 29.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(32, 7, 29.9);
    glVertex3f(30, 7, 29.9);
    glVertex3f(30, 9, 29.9);
    glVertex3f(32, 9, 29.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 7, 37.1);
    glVertex3f(26, 7, 37.1);
    glVertex3f(26, 9, 37.1);
    glVertex3f(28, 9, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 4, 37.1);
    glVertex3f(26, 4, 37.1);
    glVertex3f(26, 6, 37.1);
    glVertex3f(28, 6, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(32, 4, 37.1);
    glVertex3f(30, 4, 37.1);
    glVertex3f(30, 6, 37.1);
    glVertex3f(32, 6, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(32, 7, 37.1);
    glVertex3f(30, 7, 37.1);
    glVertex3f(30, 9, 37.1);
    glVertex3f(32, 9, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(36, 7, 37.1);
    glVertex3f(34, 7, 37.1);
    glVertex3f(34, 9, 37.1);
    glVertex3f(36, 9, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(36, 4, 37.1);
    glVertex3f(34, 4, 37.1);
    glVertex3f(34, 6, 37.1);
    glVertex3f(36, 6, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(40, 4, 37.1);
    glVertex3f(38, 4, 37.1);
    glVertex3f(38, 6, 37.1);
    glVertex3f(40, 6, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(40, 7, 37.1);
    glVertex3f(38, 7, 37.1);
    glVertex3f(38, 9, 37.1);
    glVertex3f(40, 9, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(44, 7, 37.1);
    glVertex3f(42, 7, 37.1);
    glVertex3f(42, 9, 37.1);
    glVertex3f(44, 9, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(44, 4, 37.1);
    glVertex3f(42, 4, 37.1);
    glVertex3f(42, 6, 37.1);
    glVertex3f(44, 6, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 7, 13.1);
    glVertex3f(26, 7, 13.1);
    glVertex3f(26, 9, 13.1);
    glVertex3f(28, 9, 13.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 4, 13.1);
    glVertex3f(26, 4, 13.1);
    glVertex3f(26, 6, 13.1);
    glVertex3f(28, 6, 13.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24, 4, 13.1);
    glVertex3f(22, 4, 13.1);
    glVertex3f(22, 6, 13.1);
    glVertex3f(24, 6, 13.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24, 7, 13.1);
    glVertex3f(22, 7, 13.1);
    glVertex3f(22, 9, 13.1);
    glVertex3f(24, 9, 13.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 7, 3.9);
    glVertex3f(26, 7, 3.9);
    glVertex3f(26, 9, 3.9);
    glVertex3f(28, 9, 3.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(28, 4, 3.9);
    glVertex3f(26, 4, 3.9);
    glVertex3f(26, 6, 3.9);
    glVertex3f(28, 6, 3.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24, 4, 3.9);
    glVertex3f(22, 4, 3.9);
    glVertex3f(22, 6, 3.9);
    glVertex3f(24, 6, 3.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24, 7, 3.9);
    glVertex3f(22, 7, 3.9);
    glVertex3f(22, 9, 3.9);
    glVertex3f(24, 9, 3.9);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(25, 0, 30);
    glVertex3f(25, 0, 37);
    glVertex3f(25, 10, 37);
    glVertex3f(25, 10, 30);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24.9, 7, 31);
    glVertex3f(24.9, 7, 33);
    glVertex3f(24.9, 9, 33);
    glVertex3f(24.9, 9 ,31);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24.9, 4, 31);
    glVertex3f(24.9, 4, 33);
    glVertex3f(24.9, 6, 33);
    glVertex3f(24.9, 6 ,31);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24.9, 4, 34);
    glVertex3f(24.9, 4, 36);
    glVertex3f(24.9, 6, 36);
    glVertex3f(24.9, 6 ,34);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(24.9, 7, 34);
    glVertex3f(24.9, 7, 36);
    glVertex3f(24.9, 9, 36);
    glVertex3f(24.9, 9 ,34);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(25, 10, 30);
    glVertex3f(25, 10, 37);
    glVertex3f(25, 17, 33.5);
    glVertex3f(25, 17, 33.5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(25, 10, 30);
    glVertex3f(34, 10, 30);
    glVertex3f(38.8, 17, 33.5);
    glVertex3f(25, 17, 33.5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3);
    glVertex3f(25, 10, 37);
    glVertex3f(35, 10, 37);
    glVertex3f(38.8, 17, 33.5);
    glVertex3f(25, 17, 33.5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(25, 0, 37);
    glVertex3f(45, 0, 37);
    glVertex3f(45, 10, 37);
    glVertex3f(25, 10, 37);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(42, 0, -5);
    glVertex3f(45, 0, 37);
    glVertex3f(45, 10, 37);
    glVertex3f(42, 10, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(42, 10, -5);
    glVertex3f(45, 10, 37);
    glVertex3f(39, 17, 37);
    glVertex3f(35.5, 17, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3,0.3);
    glVertex3f(30, 10, -5);
    glVertex3f(35, 10, 37);
    glVertex3f(39, 17, 37);
    glVertex3f(35.5, 17, -5);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(31, 10, 4);
    glVertex3f(18, 10, 4);
    glVertex3f(18, 17, 8);
    glVertex3f(36.5, 17, 8);
    glEnd();
    
    //bangunan depan 1
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3,0.3);
    glVertex3f(32, 10, 13);
    glVertex3f(18, 10, 13);
    glVertex3f(18, 17, 8);
    glVertex3f(36.5, 17, 8);
    glEnd();
    
    //bangunan depan 2
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7,0.5 );
    glVertex3f(45, 0, 38);
    glVertex3f(52, 0, 38);
    glVertex3f(52, 23, 38);
    glVertex3f(45, 23, 38);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(51, 0, 45.1);
    glVertex3f(46, 0, 45.1);
    glVertex3f(46, 9, 45.1);
    glVertex3f(51, 9, 45.1);
    glEnd();
    
    //bangunan depan 2
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(45, 0, 38);
    glVertex3f(45, 0, 45);
    glVertex3f(45, 23, 45);
    glVertex3f(45, 23, 38);
    glEnd();
    
    //bangunan depan 2
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(45, 0, 45);
    glVertex3f(52, 0, 45);
    glVertex3f(52, 23, 45);
    glVertex3f(45, 23, 45);
    glEnd();
    
    //bangunan depan2
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(52, 0, 38);
    glVertex3f(52, 0, 45);
    glVertex3f(52, 23, 45);
    glVertex3f(52, 23, 38);
    glEnd();
    
    //bangunan depan2
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3,0.3);
    glVertex3f(52, 23, 38);
    glVertex3f(52, 23, 45);
    glVertex3f(48.5, 29, 41);
    glVertex3f(48.5, 29, 41);
    glEnd();
    
    //bangunan depan2
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3);
    glVertex3f(45, 23, 38);
    glVertex3f(45, 23, 45);
    glVertex3f(48.5, 29, 41);
    glVertex3f(48.5, 29, 41);
    glEnd();
    
    //bangunan depan 2
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(45, 23, 45);
    glVertex3f(52, 23, 45);
    glVertex3f(48.5, 29, 41);
    glVertex3f(48.5, 29, 41);
    glEnd();
    
    //bangunan depan 2
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.3,0.3);
    glVertex3f(45, 23, 38);
    glVertex3f(52, 23, 38);
    glVertex3f(48.5, 29, 41);
    glVertex3f(48.5, 29, 41);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(46, 0, 37);
    glVertex3f(64, 0, 37);
    glVertex3f(64, 10, 37);
    glVertex3f(46, 10, 37);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(46, 0, 37);
    glVertex3f(46, 0, 29);
    glVertex3f(46, 10, 29);
    glVertex3f(46, 10, 37);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.7,0.5 );
    glVertex3f(46, 0, 29);
    glVertex3f(64, 0, 29);
    glVertex3f(64, 10, 29);
    glVertex3f(46, 10, 29);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(64, 0, 37);
    glVertex3f(64, 0, 29);
    glVertex3f(64, 10, 29);
    glVertex3f(64, 10, 37);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3);
    glVertex3f(46, 10, 37);
    glVertex3f(46, 10, 29);
    glVertex3f(46, 17, 33);
    glVertex3f(46, 17, 33);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.3,0.3);
    glVertex3f(46, 10, 29);
    glVertex3f(64, 10, 29);
    glVertex3f(64, 17, 33);
    glVertex3f(46, 17, 33);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3,0.3);
    glVertex3f(64, 10, 37);
    glVertex3f(64, 10, 29);
    glVertex3f(64, 17, 33);
    glVertex3f(64, 17, 33);
    glEnd();
    
    //bangunan depan 3
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(46, 10, 37);
    glVertex3f(64, 10, 37);
    glVertex3f(64, 17, 33);
    glVertex3f(46, 17, 33);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 7, 37.1);
    glVertex3f(52, 7, 37.1);
    glVertex3f(52, 9, 37.1);
    glVertex3f(54, 9, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 4, 37.1);
    glVertex3f(52, 4, 37.1);
    glVertex3f(52, 6, 37.1);
    glVertex3f(54, 6, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 4, 37.1);
    glVertex3f(56, 4, 37.1);
    glVertex3f(56, 6, 37.1);
    glVertex3f(58, 6, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 7, 37.1);
    glVertex3f(56, 7, 37.1);
    glVertex3f(56, 9, 37.1);
    glVertex3f(58, 9, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 7, 37.1);
    glVertex3f(60, 7, 37.1);
    glVertex3f(60, 9, 37.1);
    glVertex3f(62, 9, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 4, 37.1);
    glVertex3f(60, 4, 37.1);
    glVertex3f(60, 6, 37.1);
    glVertex3f(62, 6, 37.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 7, 28.9);
    glVertex3f(52, 7, 28.9);
    glVertex3f(52, 9, 28.9);
    glVertex3f(54, 9, 28.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 4, 28.9);
    glVertex3f(52, 4, 28.9);
    glVertex3f(52, 6, 28.9);
    glVertex3f(54, 6, 28.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 4, 28.9);
    glVertex3f(56, 4, 28.9);
    glVertex3f(56, 6, 28.9);
    glVertex3f(58, 6, 28.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 7, 28.9);
    glVertex3f(56, 7, 28.9);
    glVertex3f(56, 9, 28.9);
    glVertex3f(58, 9, 28.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 7, 28.9);
    glVertex3f(60, 7, 28.9);
    glVertex3f(60, 9, 28.9);
    glVertex3f(62, 9, 28.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 4, 28.9);
    glVertex3f(60, 4, 28.9);
    glVertex3f(60, 6, 28.9);
    glVertex3f(62, 6, 28.9);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(65, 0, 37);
    glVertex3f(68, 0, -4);
    glVertex3f(68, 10, -4);
    glVertex3f(65, 10, 37);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(75, 0, 37);
    glVertex3f(78, 0, -4);
    glVertex3f(78, 10, -4);
    glVertex3f(75, 10, 37);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(65, 0, 37);
    glVertex3f(75, 0, 37);
    glVertex3f(75, 10, 37);
    glVertex3f(65, 10, 37);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7,0.5 );
    glVertex3f(68, 0, -4);
    glVertex3f(78, 0, -4);
    glVertex3f(78, 10, -4);
    glVertex3f(68, 10, -4);
    glEnd();
    
     //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3);
    glVertex3f(65, 10, 37);
    glVertex3f(68, 10, -4);
    glVertex3f(73, 17, -4);
    glVertex3f(69, 17, 37);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(65, 10, 37);
    glVertex3f(75, 10, 37);
    glVertex3f(69, 17, 37);
    glVertex3f(69, 17, 37);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3,0.3);
    glVertex3f(75, 10, 37);
    glVertex3f(78, 10, -4);
    glVertex3f(73, 17, -4);
    glVertex3f(69, 17, 37);
    glEnd();
    
    //bangunan depan 4
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.3,0.3);
    glVertex3f(68, 10, -4);
    glVertex3f(78, 10, -4);
    glVertex3f(73, 17, -4);
    glVertex3f(73, 17, -4);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(68, 4, 37.1);
    glVertex3f(66, 4, 37.1);
    glVertex3f(66, 6, 37.1);
    glVertex3f(68, 6, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(68, 7, 37.1);
    glVertex3f(66, 7, 37.1);
    glVertex3f(66, 9, 37.1);
    glVertex3f(68, 9, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(72, 4, 37.1);
    glVertex3f(70, 4, 37.1);
    glVertex3f(70, 6, 37.1);
    glVertex3f(72, 6, 37.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(72, 7, 37.1);
    glVertex3f(70, 7, 37.1);
    glVertex3f(70, 9, 37.1);
    glVertex3f(72, 9, 37.1);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(31, 0, -6);
    glVertex3f(78, 0, -5);
    glVertex3f(78, 10, -5);
    glVertex3f(31, 10, -6);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(31, 0, -17);
    glVertex3f(78, 0, -16);
    glVertex3f(78, 10, -16);
    glVertex3f(31, 10, -17);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(31, 0, -6);
    glVertex3f(31, 0, -17);
    glVertex3f(31, 10, -17);
    glVertex3f(31, 10, -6);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.7,0.5 );
    glVertex3f(78, 0, -5);
    glVertex3f(78, 0, -16);
    glVertex3f(78, 10, -16);
    glVertex3f(78, 10, -5);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3);
    glVertex3f(31, 10, -6);
    glVertex3f(78, 10, -5);
    glVertex3f(78, 17, -10.5);
    glVertex3f(31, 17, -11.5);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3,0.3);
    glVertex3f(78, 10, -5);
    glVertex3f(78, 10, -16);
    glVertex3f(78, 17, -10.5);
    glVertex3f(78, 17, -10.5);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.3,0.3);
    glVertex3f(31, 10, -17);
    glVertex3f(78, 10, -16);
    glVertex3f(78, 17, -10.5);
    glVertex3f(31, 17, -11.5);
    glEnd();
    
    //bangunan depan 5
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3);
    glVertex3f(31, 10, -6);
    glVertex3f(31, 10, -17);
    glVertex3f(31, 17, -11.5);
    glVertex3f(31, 17, -11.5);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(46, 7, -4.9);
    glVertex3f(44, 7, -4.9);
    glVertex3f(44, 9, -4.9);
    glVertex3f(46, 9, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(46, 4, -4.9);
    glVertex3f(44, 4, -4.9);
    glVertex3f(44, 6, -4.9);
    glVertex3f(46, 6, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(50, 7, -4.9);
    glVertex3f(48, 7, -4.9);
    glVertex3f(48, 9, -4.9);
    glVertex3f(50, 9, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(50, 4, -4.9);
    glVertex3f(48, 4, -4.9);
    glVertex3f(48, 6, -4.9);
    glVertex3f(50, 6, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 7, -4.9);
    glVertex3f(52, 7, -4.9);
    glVertex3f(52, 9, -4.9);
    glVertex3f(54, 9, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 4, -4.9);
    glVertex3f(52, 4, -4.9);
    glVertex3f(52, 6, -4.9);
    glVertex3f(54, 6, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 4, -4.9);
    glVertex3f(56, 4, -4.9);
    glVertex3f(56, 6, -4.9);
    glVertex3f(58, 6, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 7, -4.9);
    glVertex3f(56, 7, -4.9);
    glVertex3f(56, 9, -4.9);
    glVertex3f(58, 9, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 7, -4.9);
    glVertex3f(60, 7, -4.9);
    glVertex3f(60, 9, -4.9);
    glVertex3f(62, 9, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 4, -4.9);
    glVertex3f(60, 4, -4.9);
    glVertex3f(60, 6, -4.9);
    glVertex3f(62, 6, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(66, 4, -4.9);
    glVertex3f(64, 4, -4.9);
    glVertex3f(64, 6, -4.9);
    glVertex3f(66, 6, -4.9);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(66, 7, -4.9);
    glVertex3f(64, 7, -4.9);
    glVertex3f(64, 9, -4.9);
    glVertex3f(66, 9, -4.9);
    glEnd();
    
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(42, 7, -16.9);
    glVertex3f(40, 7, -16.9);
    glVertex3f(40, 9, -16.9);
    glVertex3f(42, 9, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(42, 4, -16.9);
    glVertex3f(40, 4, -16.9);
    glVertex3f(40, 6, -16.9);
    glVertex3f(42, 6, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(38, 7, -16.9);
    glVertex3f(36, 7, -16.9);
    glVertex3f(36, 9, -16.9);
    glVertex3f(38, 9, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(38, 4, -16.9);
    glVertex3f(36, 4, -16.9);
    glVertex3f(36, 6, -16.9);
    glVertex3f(38, 6, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(34, 7, -17.1);
    glVertex3f(32, 7, -17.1);
    glVertex3f(32, 9, -17.1);
    glVertex3f(34, 9, -17.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(34, 4, -17.1);
    glVertex3f(32, 4, -17.1);
    glVertex3f(32, 6, -17.1);
    glVertex3f(34, 6, -17.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(46, 7, -16.9);
    glVertex3f(44, 7, -16.9);
    glVertex3f(44, 9, -16.9);
    glVertex3f(46, 9, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(46, 4, -16.9);
    glVertex3f(44, 4, -16.9);
    glVertex3f(44, 6, -16.9);
    glVertex3f(46, 6, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(50, 7, -16.7);
    glVertex3f(48, 7, -16.7);
    glVertex3f(48, 9, -16.7);
    glVertex3f(50, 9, -16.7);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(50, 4, -16.7);
    glVertex3f(48, 4, -16.7);
    glVertex3f(48, 6, -16.7);
    glVertex3f(50, 6, -16.7);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 7, -16.9);
    glVertex3f(52, 7, -16.9);
    glVertex3f(52, 9, -16.9);
    glVertex3f(54, 9, -16.9);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(54, 4, -16.8);
    glVertex3f(52, 4, -16.8);
    glVertex3f(52, 6, -16.8);
    glVertex3f(54, 6, -16.8);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 4, -16.8);
    glVertex3f(56, 4, -16.8);
    glVertex3f(56, 6, -16.8);
    glVertex3f(58, 6, -16.8);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(58, 7, -16.8);
    glVertex3f(56, 7, -16.8);
    glVertex3f(56, 9, -16.8);
    glVertex3f(58, 9, -16.8);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 7, -16.7);
    glVertex3f(60, 7, -16.7);
    glVertex3f(60, 9, -16.7);
    glVertex3f(62, 9, -16.7);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(62, 4, -16.7);
    glVertex3f(60, 4, -16.7);
    glVertex3f(60, 6, -16.7);
    glVertex3f(62, 6, -16.7);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(66, 4, -16.6);
    glVertex3f(64, 4, -16.6);
    glVertex3f(64, 6, -16.6);
    glVertex3f(66, 6, -16.6);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(66, 7, -16.6);
    glVertex3f(64, 7, -16.6);
    glVertex3f(64, 9, -16.6);
    glVertex3f(66, 9, -16.6);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(70, 7, -16.5);
    glVertex3f(68, 7, -16.5);
    glVertex3f(68, 9, -16.5);
    glVertex3f(70, 9, -16.5);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(70, 4, -16.5);
    glVertex3f(68, 4, -16.5);
    glVertex3f(68, 6, -16.5);
    glVertex3f(70, 6, -16.5);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(74, 4, -16.4);
    glVertex3f(72, 4, -16.4);
    glVertex3f(72, 6, -16.4);
    glVertex3f(74, 6, -16.4);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(74, 7, -16.4);
    glVertex3f(72, 7, -16.4);
    glVertex3f(72, 9, -16.4);
    glVertex3f(74, 9, -16.4);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(78, 7, -16.4);
    glVertex3f(76, 7, -16.4);
    glVertex3f(76, 9, -16.4);
    glVertex3f(78, 9, -16.4);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(78, 4, -16.4);
    glVertex3f(76, 4, -16.4);
    glVertex3f(76, 6, -16.4);
    glVertex3f(78, 6, -16.4);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(-28, 0, 0);
    glVertex3f(-20, 0, 0);
    glVertex3f(-20, 13, 0);
    glVertex3f(-28, 13, 0);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.8,0.5 );
    glVertex3f(-28, 0, 0);
    glVertex3f(-28, 13, 0);
    glVertex3f(-28, 13, -10);
    glVertex3f(-28, 0, -10);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(-20, 0, 0);
    glVertex3f(-20, 13, 0);
    glVertex3f(-20, 13, -10);
    glVertex3f(-20, 0, -10);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.8,0.5 );
    glVertex3f(-28, 0, -10);
    glVertex3f(-20, 0, -10);
    glVertex3f(-20, 13, -10);
    glVertex3f(-28, 13, -10);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.9,0.2 );
    glVertex3f(-28, 13, 0);
    glVertex3f(-20, 13, 0);
    glVertex3f(-24, 17, -3);
    glVertex3f(-24, 17, -3);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.6,0.2 );
    glVertex3f(-28, 13, -10);
    glVertex3f(-20, 13, -10);
    glVertex3f(-24, 17, -7);
    glVertex3f(-24, 17, -7);
    glEnd();
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.8,0.2 );
    glVertex3f(-20, 13, 0);
    glVertex3f(-24, 17, -3);
    glVertex3f(-24, 17, -7);
    glVertex3f(-20, 13, -10);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-23, 4, 0.1);
    glVertex3f(-21, 4, 0.1);
    glVertex3f(-21, 6, 0.1);
    glVertex3f(-23, 6, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-23, 7, 0.1);
    glVertex3f(-21, 7, 0.1);
    glVertex3f(-21, 9, 0.1);
    glVertex3f(-23, 9, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-27, 4, 0.1);
    glVertex3f(-25, 4, 0.1);
    glVertex3f(-25, 6, 0.1);
    glVertex3f(-27, 6, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-27, 7, 0.1);
    glVertex3f(-25, 7, 0.1);
    glVertex3f(-25, 9, 0.1);
    glVertex3f(-27, 9, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-31, 7, 0.1);
    glVertex3f(-29, 7, 0.1);
    glVertex3f(-29, 9, 0.1);
    glVertex3f(-31, 9, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-31, 4, 0.1);
    glVertex3f(-29, 4, 0.1);
    glVertex3f(-29, 6, 0.1);
    glVertex3f(-31, 6, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-35, 4, 0.1);
    glVertex3f(-33, 4, 0.1);
    glVertex3f(-33, 6, 0.1);
    glVertex3f(-35, 6, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-35, 7, 0.1);
    glVertex3f(-33, 7, 0.1);
    glVertex3f(-33, 9, 0.1);
    glVertex3f(-35, 9, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-39, 7, 0.1);
    glVertex3f(-37, 7, 0.1);
    glVertex3f(-37, 9, 0.1);
    glVertex3f(-39, 9, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-39, 4, 0.1);
    glVertex3f(-37, 4, 0.1);
    glVertex3f(-37, 6, 0.1);
    glVertex3f(-39, 6, 0.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-43, 7, 0.1);
    glVertex3f(-41, 7, 0.1);
    glVertex3f(-41, 9, 0.1);
    glVertex3f(-43, 9, 0.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-43, 4, 0.1);
    glVertex3f(-41, 4, 0.1);
    glVertex3f(-41, 6, 0.1);
    glVertex3f(-43, 6, 0.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-47, 7, 0.1);
    glVertex3f(-45, 7, 0.1);
    glVertex3f(-45, 9, 0.1);
    glVertex3f(-47, 9, 0.1);
    glEnd();
    
    //bangunan depan j1
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-47, 4, 0.1);
    glVertex3f(-45, 4, 0.1);
    glVertex3f(-45, 6, 0.1);
    glVertex3f(-47, 6, 0.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-23, 4, -10.1);
    glVertex3f(-21, 4, -10.1);
    glVertex3f(-21, 6, -10.1);
    glVertex3f(-23, 6, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-23, 7, -10.1);
    glVertex3f(-21, 7, -10.1);
    glVertex3f(-21, 9, -10.1);
    glVertex3f(-23, 9, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-27, 4, -10.1);
    glVertex3f(-25, 4, -10.1);
    glVertex3f(-25, 6, -10.1);
    glVertex3f(-27, 6, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-27, 7, -10.1);
    glVertex3f(-25, 7, -10.1);
    glVertex3f(-25, 9, -10.1);
    glVertex3f(-27, 9, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-31, 7, -10.1);
    glVertex3f(-29, 7, -10.1);
    glVertex3f(-29, 9, -10.1);
    glVertex3f(-31, 9, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-31, 4, -10.1);
    glVertex3f(-29, 4, -10.1);
    glVertex3f(-29, 6, -10.1);
    glVertex3f(-31, 6, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-35, 4, -10.1);
    glVertex3f(-33, 4, -10.1);
    glVertex3f(-33, 6, -10.1);
    glVertex3f(-35, 6, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-35, 7, -10.1);
    glVertex3f(-33, 7, -10.1);
    glVertex3f(-33, 9, -10.1);
    glVertex3f(-35, 9, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-39, 7, -10.1);
    glVertex3f(-37, 7, -10.1);
    glVertex3f(-37, 9, -10.1);
    glVertex3f(-39, 9, -10.1);
    glEnd();
    
    //bangunan depan j
    glBegin(GL_QUADS);
    glColor3f(0, 0,0 );
    glVertex3f(-39, 4, -10.1);
    glVertex3f(-37, 4, -10.1);
    glVertex3f(-37, 6, -10.1);
    glVertex3f(-39, 6, -10.1);
    glEnd();
    
    
    //bangunan kiri 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.7,0.2 );
    glVertex3f(-28, 13, 0);
    glVertex3f(-24, 17, -3);
    glVertex3f(-24, 17, -7);
    glVertex3f(-28, 13, -10);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.5 );
    glVertex3f(-28, 0, 0);
    glVertex3f(-42, 0, 0);
    glVertex3f(-42, 13, 0);
    glVertex3f(-28, 13, 0);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7,0.5 );
    glVertex3f(-42, 0, 0);
    glVertex3f(-42, 0, -10);
    glVertex3f(-42, 13, -10);
    glVertex3f(-42, 13, 0);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.5 );
    glVertex3f(-28, 0, -10);
    glVertex3f(-42, 0, -10);
    glVertex3f(-42, 13, -10);
    glVertex3f(-28, 13, -10);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.8,0.2 );
    glVertex3f(-42, 13, 0);
    glVertex3f(-42, 13, -10);
    glVertex3f(-39, 17, -5);
    glVertex3f(-39, 17, -5);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.6,0.2 );
    glVertex3f(-28, 13, -10);
    glVertex3f(-42, 13, -10);
    glVertex3f(-39, 17, -5);
    glVertex3f(-24, 17, -5);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.9,0.2 );
    glVertex3f(-28, 13, 0);
    glVertex3f(-42, 13, 0);
    glVertex3f(-39, 17, -5);
    glVertex3f(-24, 17, -5);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.8,0.5 );
    glVertex3f(-42, 0, 0);
    glVertex3f(-50, 0, 0);
    glVertex3f(-50, 13, 0);
    glVertex3f(-42, 13, 0);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7,0.5 );
    glVertex3f(-42, 0, -20);
    glVertex3f(-50, 0, -20);
    glVertex3f(-50, 13, -20);
    glVertex3f(-42, 13, -20);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.7,0.5 );
    glVertex3f(-42, 0, -0);
    glVertex3f(-42, 0, -20);
    glVertex3f(-42, 13, -20);
    glVertex3f(-42, 13, -0);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.8,0.5 );
    glVertex3f(-50, 0, -0);
    glVertex3f(-50, 0, -20);
    glVertex3f(-50, 13, -20);
    glVertex3f(-50, 13, -0);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.6,0.2 );
    glVertex3f(-42, 13, -20);
    glVertex3f(-50, 13, -20);
    glVertex3f(-46, 17, -17);
    glVertex3f(-46, 17, -17);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.9,0.2 );
    glVertex3f(-42, 13, -0);
    glVertex3f(-50, 13, -0);
    glVertex3f(-46, 17, -3);
    glVertex3f(-46, 17, -3);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.7,0.2 );
    glVertex3f(-50, 13, -0);
    glVertex3f(-50, 13, -20);
    glVertex3f(-46, 17, -17);
    glVertex3f(-46, 17, -3);
    glEnd();
    
    //bangunan kiri 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.8,0.2 );
    glVertex3f(-42, 13, -0);
    glVertex3f(-42, 13, -20);
    glVertex3f(-46, 17, -17);
    glVertex3f(-46, 17, -3);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.9, 0.9,0.9 );
    glVertex3f(10, 0, -25);
    glVertex3f(24, 0, -25);
    glVertex3f(24, 10, -25);
    glVertex3f(10, 10, -25);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.6, 0.6,0.6 );
    glVertex3f(10, 0, -33);
    glVertex3f(24, 0, -33);
    glVertex3f(24, 10, -33);
    glVertex3f(10, 10, -33);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8,0.8 );
    glVertex3f(10, 0, -25);
    glVertex3f(10, 0, -33);
    glVertex3f(10, 10, -33);
    glVertex3f(10, 10, -25);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.7, 0.7,0.7 );
    glVertex3f(24, 0, -25);
    glVertex3f(24, 0, -33);
    glVertex3f(24, 10, -33);
    glVertex3f(24, 10, -25);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.2, 0.4,0.2 );
    glVertex3f(24, 10, -25);
    glVertex3f(24, 10, -33);
    glVertex3f(22, 17, -29);
    glVertex3f(22, 17, -29);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.2, 0.5,0.2 );
    glVertex3f(10, 10, -25);
    glVertex3f(10, 10, -33);
    glVertex3f(12, 17, -29);
    glVertex3f(12, 17, -29);
    glEnd();
    
    //bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.2, 0.6,0.2 );
    glVertex3f(10, 10, -25);
    glVertex3f(24, 10, -25);
    glVertex3f(22, 17, -29);
    glVertex3f(12, 17, -29);
    glEnd();
	
	//bangunan belakang
	glBegin(GL_QUADS);
    glColor3f(0.2, 0.3,0.2 );
    glVertex3f(10, 10, -33);
    glVertex3f(24, 10, -33);
    glVertex3f(22, 17, -29);
    glVertex3f(12, 17, -29);
    glEnd();
    
    //bangunan belakang 1
	glBegin(GL_QUADS);
    glColor3f(0.7, 0.1,0.1 );
    glVertex3f(-75, 0, 50);
    glVertex3f(-75, 0, 0);
    glVertex3f(-75, 10, 0);
    glVertex3f(-75, 10, 50);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(0.9, 0.3,0.3 );
    glVertex3f(-75, 10, 50);
    glVertex3f(-75, 10, 0);
    glVertex3f(-81.5, 17, 0);
    glVertex3f(-81.5, 17, 50);
    glEnd();
    
    //bangunan belakang 1
	glBegin(GL_QUADS);
    glColor3f(0.4, 0.1,0.1 );
    glVertex3f(-88, 0, 50);
    glVertex3f(-88, 0, 0);
    glVertex3f(-88, 10, 0);
    glVertex3f(-88, 10, 50);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(0.5, 0.3,0.3 );
    glVertex3f(-88, 10, 50);
    glVertex3f(-88, 10, 0);
    glVertex3f(-81.5, 17, 0);
    glVertex3f(-81.5, 17, 50);
    glEnd();
    
    //bangunan belakang 1
	glBegin(GL_QUADS);
    glColor3f(0.6, 0.1,0.1 );
    glVertex3f(-75, 0, 50);
    glVertex3f(-88, 0, 50);
    glVertex3f(-88, 10, 50);
    glVertex3f(-75, 10, 50);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3 );
    glVertex3f(-75, 10, 50);
    glVertex3f(-88, 10, 50);
    glVertex3f(-81.5, 17, 50);
    glVertex3f(-81.5, 17, 50);
    glEnd();
    
    //bangunan belakang 1
	glBegin(GL_QUADS);
    glColor3f(0.5, 0.1,0.1 );
    glVertex3f(-75, 0, 0);
    glVertex3f(-88, 0, 0);
    glVertex3f(-88, 10, 0);
    glVertex3f(-75, 10, 0);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.3,0.3 );
    glVertex3f(-75, 10, 0);
    glVertex3f(-88, 10, 0);
    glVertex3f(-81.5, 17, 0);
    glVertex3f(-81.5, 17, 0);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 49);
    glVertex3f(-74.9, 7, 47);
    glVertex3f(-74.9, 9, 47);
    glVertex3f(-74.9, 9, 49);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 49);
    glVertex3f(-74.9, 4, 47);
    glVertex3f(-74.9, 6, 47);
    glVertex3f(-74.9, 6, 49);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 46);
    glVertex3f(-74.9, 7, 44);
    glVertex3f(-74.9, 9, 44);
    glVertex3f(-74.9, 9, 46);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 46);
    glVertex3f(-74.9, 4, 44);
    glVertex3f(-74.9, 6, 44);
    glVertex3f(-74.9, 6, 46);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 43);
    glVertex3f(-74.9, 7, 41);
    glVertex3f(-74.9, 9, 41);
    glVertex3f(-74.9, 9, 43);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 43);
    glVertex3f(-74.9, 4, 41);
    glVertex3f(-74.9, 6, 41);
    glVertex3f(-74.9, 6, 43);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 40);
    glVertex3f(-74.9, 7, 38);
    glVertex3f(-74.9, 9, 38);
    glVertex3f(-74.9, 9, 40);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 40);
    glVertex3f(-74.9, 4, 38);
    glVertex3f(-74.9, 6, 38);
    glVertex3f(-74.9, 6, 40);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 37);
    glVertex3f(-74.9, 7, 35);
    glVertex3f(-74.9, 9, 35);
    glVertex3f(-74.9, 9, 37);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 37);
    glVertex3f(-74.9, 4, 35);
    glVertex3f(-74.9, 6, 35);
    glVertex3f(-74.9, 6, 37);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 34);
    glVertex3f(-74.9, 7, 32);
    glVertex3f(-74.9, 9, 32);
    glVertex3f(-74.9, 9, 34);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 34);
    glVertex3f(-74.9, 4, 32);
    glVertex3f(-74.9, 6, 32);
    glVertex3f(-74.9, 6, 34);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 31);
    glVertex3f(-74.9, 7, 29);
    glVertex3f(-74.9, 9, 29);
    glVertex3f(-74.9, 9, 31);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 31);
    glVertex3f(-74.9, 4, 29);
    glVertex3f(-74.9, 6, 29);
    glVertex3f(-74.9, 6, 31);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 28);
    glVertex3f(-74.9, 7, 26);
    glVertex3f(-74.9, 9, 26);
    glVertex3f(-74.9, 9, 28);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 28);
    glVertex3f(-74.9, 4, 26);
    glVertex3f(-74.9, 6, 26);
    glVertex3f(-74.9, 6, 28);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 25);
    glVertex3f(-74.9, 7, 23);
    glVertex3f(-74.9, 9, 23);
    glVertex3f(-74.9, 9, 25);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 25);
    glVertex3f(-74.9, 4, 23);
    glVertex3f(-74.9, 6, 23);
    glVertex3f(-74.9, 6, 25);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 22);
    glVertex3f(-74.9, 7, 20);
    glVertex3f(-74.9, 9, 20);
    glVertex3f(-74.9, 9, 22);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 22);
    glVertex3f(-74.9, 4, 20);
    glVertex3f(-74.9, 6, 20);
    glVertex3f(-74.9, 6, 22);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 22);
    glVertex3f(-74.9, 7, 20);
    glVertex3f(-74.9, 9, 20);
    glVertex3f(-74.9, 9, 22);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 22);
    glVertex3f(-74.9, 4, 20);
    glVertex3f(-74.9, 6, 20);
    glVertex3f(-74.9, 6, 22);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 19);
    glVertex3f(-74.9, 7, 17);
    glVertex3f(-74.9, 9, 17);
    glVertex3f(-74.9, 9, 19);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 19);
    glVertex3f(-74.9, 4, 17);
    glVertex3f(-74.9, 6, 17);
    glVertex3f(-74.9, 6, 19);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 16);
    glVertex3f(-74.9, 7, 14);
    glVertex3f(-74.9, 9, 14);
    glVertex3f(-74.9, 9, 16);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 16);
    glVertex3f(-74.9, 4, 14);
    glVertex3f(-74.9, 6, 14);
    glVertex3f(-74.9, 6, 16);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 13);
    glVertex3f(-74.9, 7, 11);
    glVertex3f(-74.9, 9, 11);
    glVertex3f(-74.9, 9, 13);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 13);
    glVertex3f(-74.9, 4, 11);
    glVertex3f(-74.9, 6, 11);
    glVertex3f(-74.9, 6, 13);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 10);
    glVertex3f(-74.9, 7, 8);
    glVertex3f(-74.9, 9, 8);
    glVertex3f(-74.9, 9, 10);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 10);
    glVertex3f(-74.9, 4, 8);
    glVertex3f(-74.9, 6, 8);
    glVertex3f(-74.9, 6, 10);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 7);
    glVertex3f(-74.9, 7, 5);
    glVertex3f(-74.9, 9, 5);
    glVertex3f(-74.9, 9, 7);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 7);
    glVertex3f(-74.9, 4, 5);
    glVertex3f(-74.9, 6, 5);
    glVertex3f(-74.9, 6, 7);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 7, 4);
    glVertex3f(-74.9, 7, 2);
    glVertex3f(-74.9, 9, 2);
    glVertex3f(-74.9, 9, 4);
    glEnd();
    
    //bangunan belakang -------
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-74.9, 4, 4);
    glVertex3f(-74.9, 4, 2);
    glVertex3f(-74.9, 6, 2);
    glVertex3f(-74.9, 6, 4);
    glEnd();
    
    //bangunan belakang 0 -------
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 49);
    glVertex3f(-88.1, 7, 47);
    glVertex3f(-88.1, 9, 47);
    glVertex3f(-88.1, 9, 49);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 49);
    glVertex3f(-88.1, 4, 47);
    glVertex3f(-88.1, 6, 47);
    glVertex3f(-88.1, 6, 49);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 46);
    glVertex3f(-88.1, 7, 44);
    glVertex3f(-88.1, 9, 44);
    glVertex3f(-88.1, 9, 46);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 46);
    glVertex3f(-88.1, 4, 44);
    glVertex3f(-88.1, 6, 44);
    glVertex3f(-88.1, 6, 46);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 43);
    glVertex3f(-88.1, 7, 41);
    glVertex3f(-88.1, 9, 41);
    glVertex3f(-88.1, 9, 43);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 43);
    glVertex3f(-88.1, 4, 41);
    glVertex3f(-88.1, 6, 41);
    glVertex3f(-88.1, 6, 43);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 40);
    glVertex3f(-88.1, 7, 38);
    glVertex3f(-88.1, 9, 38);
    glVertex3f(-88.1, 9, 40);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 40);
    glVertex3f(-88.1, 4, 38);
    glVertex3f(-88.1, 6, 38);
    glVertex3f(-88.1, 6, 40);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 37);
    glVertex3f(-88.1, 7, 35);
    glVertex3f(-88.1, 9, 35);
    glVertex3f(-88.1, 9, 37);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 37);
    glVertex3f(-88.1, 4, 35);
    glVertex3f(-88.1, 6, 35);
    glVertex3f(-88.1, 6, 37);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 34);
    glVertex3f(-88.1, 7, 32);
    glVertex3f(-88.1, 9, 32);
    glVertex3f(-88.1, 9, 34);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 34);
    glVertex3f(-88.1, 4, 32);
    glVertex3f(-88.1, 6, 32);
    glVertex3f(-88.1, 6, 34);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 31);
    glVertex3f(-88.1, 7, 29);
    glVertex3f(-88.1, 9, 29);
    glVertex3f(-88.1, 9, 31);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 31);
    glVertex3f(-88.1, 4, 29);
    glVertex3f(-88.1, 6, 29);
    glVertex3f(-88.1, 6, 31);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 28);
    glVertex3f(-88.1, 7, 26);
    glVertex3f(-88.1, 9, 26);
    glVertex3f(-88.1, 9, 28);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 28);
    glVertex3f(-88.1, 4, 26);
    glVertex3f(-88.1, 6, 26);
    glVertex3f(-88.1, 6, 28);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 25);
    glVertex3f(-88.1, 7, 23);
    glVertex3f(-88.1, 9, 23);
    glVertex3f(-88.1, 9, 25);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 25);
    glVertex3f(-88.1, 4, 23);
    glVertex3f(-88.1, 6, 23);
    glVertex3f(-88.1, 6, 25);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 22);
    glVertex3f(-88.1, 7, 20);
    glVertex3f(-88.1, 9, 20);
    glVertex3f(-88.1, 9, 22);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 22);
    glVertex3f(-88.1, 4, 20);
    glVertex3f(-88.1, 6, 20);
    glVertex3f(-88.1, 6, 22);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 22);
    glVertex3f(-88.1, 7, 20);
    glVertex3f(-88.1, 9, 20);
    glVertex3f(-88.1, 9, 22);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 22);
    glVertex3f(-88.1, 4, 20);
    glVertex3f(-88.1, 6, 20);
    glVertex3f(-88.1, 6, 22);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 19);
    glVertex3f(-88.1, 7, 17);
    glVertex3f(-88.1, 9, 17);
    glVertex3f(-88.1, 9, 19);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 19);
    glVertex3f(-88.1, 4, 17);
    glVertex3f(-88.1, 6, 17);
    glVertex3f(-88.1, 6, 19);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 16);
    glVertex3f(-88.1, 7, 14);
    glVertex3f(-88.1, 9, 14);
    glVertex3f(-88.1, 9, 16);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 16);
    glVertex3f(-88.1, 4, 14);
    glVertex3f(-88.1, 6, 14);
    glVertex3f(-88.1, 6, 16);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 13);
    glVertex3f(-88.1, 7, 11);
    glVertex3f(-88.1, 9, 11);
    glVertex3f(-88.1, 9, 13);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 13);
    glVertex3f(-88.1, 4, 11);
    glVertex3f(-88.1, 6, 11);
    glVertex3f(-88.1, 6, 13);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 10);
    glVertex3f(-88.1, 7, 8);
    glVertex3f(-88.1, 9, 8);
    glVertex3f(-88.1, 9, 10);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 10);
    glVertex3f(-88.1, 4, 8);
    glVertex3f(-88.1, 6, 8);
    glVertex3f(-88.1, 6, 10);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 7);
    glVertex3f(-88.1, 7, 5);
    glVertex3f(-88.1, 9, 5);
    glVertex3f(-88.1, 9, 7);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 7);
    glVertex3f(-88.1, 4, 5);
    glVertex3f(-88.1, 6, 5);
    glVertex3f(-88.1, 6, 7);
    glEnd();
    
    //bangunan belakang 0
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 7, 4);
    glVertex3f(-88.1, 7, 2);
    glVertex3f(-88.1, 9, 2);
    glVertex3f(-88.1, 9, 4);
    glEnd();
    
    //bangunan belakang 
	glBegin(GL_QUADS);
    glColor3f(1, 1,1 );
    glVertex3f(-88.1, 4, 4);
    glVertex3f(-88.1, 4, 2);
    glVertex3f(-88.1, 6, 2);
    glVertex3f(-88.1, 6, 4);
    glEnd();
    
    
    
    
    
    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'h':
    case 'H':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'f':
    case 'F':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case 't':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case 'g':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case 'k':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case 'i':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case 'd':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case 'a':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case 'j':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case 'l':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
