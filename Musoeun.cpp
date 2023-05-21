#include <iostream>
#include <vector>

// Component Ŭ���� ����
class Component {
    // Component�� ����� ����
};

// Object Ŭ���� ����
class Object {
private:
    int x;
    int y;
    float scale;
    float rotation;
    std::vector<Component*> components;

public:
    Object(int posX, int posY, float objectScale, float objectRotation) : x(posX), y(posY), scale(objectScale), rotation(objectRotation) {
        // Object�� �����ڷ� �ʱ�ȭ
    }

    void Render(std::vector<std::vector<char>>& screenBuffer) {
        // Scene���� �����ϴ� ScreenBuffer�� �Ű������� �޾� Object�� �׸��� ���� ����
        // x, y ��ǥ�� scale, rotation �� ���� �̿��Ͽ� Object�� ȭ�鿡 �׸�
    }

    // �ٸ� ��� �� �޼��� ����
};

// Scene Ŭ���� ����
class Scene {
public:
    std::vector<std::vector<char>> screenBuffer;
    std::vector<Object*> objects;

public:
    Scene(int screenWidth, int screenHeight) {
        screenBuffer.resize(screenHeight, std::vector<char>(screenWidth, ' '));
        // ȭ�� ũ�⿡ �°� ScreenBuffer �ʱ�ȭ
    }

    void Draw() {
        // Active�� Object�� Render�� ȣ���ϰ�, ScreenBuffer�� ȭ�鿡 ����ϴ� ���� ����
        for (Object* object : objects) {
            object->Render(screenBuffer);
        }

        for (const std::vector<char>& row : screenBuffer) {
            for (char pixel : row) {
                std::cout << pixel;
            }
            std::cout << std::endl;
        }
    }

    void ClearScreenBuf() {
        // ScreenBuffer�� �ʱ�ȭ�ϴ� ���� ����
        screenBuffer.clear();
    }
};

// main �Լ� (gameloop)
int main() {
    Scene scene(80, 20); // ȭ�� ũ�⸦ ���ڷ� Scene ��ü ����

    Object object1(10, 5, 1.0f, 0.0f); // Object ���� �� �ʱ�ȭ
    Object object2(20, 10, 0.5f, 45.0f);

    // Scene�� Object �߰�
    scene.objects.push_back(&object1);
    scene.objects.push_back(&object2);

    while (true) {
        // ���� ���� (gameloop)
        scene.Draw();

        // ���� ���� ����

        scene.ClearScreenBuf(); // ȭ�� Ŭ����
    }

    return 0;
}