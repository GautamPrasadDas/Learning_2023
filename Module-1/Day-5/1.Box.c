#include <stdio.h>
struct Box
{
    int height;
    int length;
    int width;
};

void VolumeArea(struct Box *boxptr);
int main()
{
    struct Box b;
    struct Box *boxptr = &b;
    printf("Enter the length box:");
    scanf("%d", &boxptr->length);
    printf("Enter the width box:");
    scanf("%d", &boxptr->width);
    printf("Enter the height box:");
    scanf("%d", &boxptr->width);
    VolumeArea(boxptr);
    return 0;
}

void VolumeArea(struct Box *boxptr)
{
    float volume = boxptr->length * boxptr->width * boxptr->height;
    float surfaceArea = 2 * (boxptr->length * boxptr->width +
                             boxptr->length * boxptr->height + boxptr->width * boxptr->height);
    printf("\nThe volume of box is:%.2f", volume);
    printf("\nThe surface of box is:%.2f", surfaceArea);
}