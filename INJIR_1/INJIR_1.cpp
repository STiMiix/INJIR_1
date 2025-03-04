#include <iostream>
#include <GL/freeglut.h>								// добавили библиотеку

void RenderSceneCB() {									// функция для обратного вызова

	glClear(GL_COLOR_BUFFER_BIT);						// очистили буфер кадра, используя заданный цвет

	glutSwapBuffers();									// поменяли местами фоновый буфер и буфер кадра
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);								// инициализировали glut


	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);		// настрили опции: двойную буферизацию и буфер цвета


	glutInitWindowSize(1024, 768);						// установили размер окна 1024 на 768 пикселей
	glutInitWindowPosition(100, 100);					// установили позицию на экране
	glutCreateWindow("Tutorial 01");					// заголовок окна


	glutDisplayFunc(RenderSceneCB);						// функция, где мы будем отрисовывать один кадр


	//glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// установили цвет, который будет использован во время след. очистки буфера кадра
			//	 red   green blue alpha-channel

	glClearColor(1.0f, 0.5f, 1.0f, 0.0f);				// сменили цвет, используемый при очистке

	glutMainLoop();										// отдали контроль глюту, и он передаст их в функцию обратного вызова RenderSceneCB


}
