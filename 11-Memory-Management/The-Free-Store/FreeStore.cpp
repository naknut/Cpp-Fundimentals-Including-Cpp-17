#include "Resource.h"
#include <string>
using std::string;

int main() {
    {
        Resource localResource("local");
        string localString = localResource.GetName();
    }
    Resource* pResource = new Resource("created with new");
    string newString = pResource->GetName();
    delete pResource;

    return 0;
}