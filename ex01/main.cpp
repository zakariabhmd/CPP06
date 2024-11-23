#include "Serialization.hpp"
#include "data.hpp"

int main() {
    // Create a Data object
    Data originalData(42, "Test Data", 3.14f);
    std::cout << "Original Data:\n";
    std::cout << "  ID: " << originalData.id << "\n";
    std::cout << "  Name: " << originalData.name << "\n";
    std::cout << "  Value: " << originalData.value << "\n\n";

    // Serialize the Data pointer
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "Serialized uintptr_t: " << raw << "\n\n";

    // Deserialize the uintptr_t back to a Data pointer
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized Data:\n";
    std::cout << "  ID: " << deserializedData->id << "\n";
    std::cout << "  Name: " << deserializedData->name << "\n";
    std::cout << "  Value: " << deserializedData->value << "\n\n";

    // Verify that the original and deserialized pointers are equal
    if (&originalData == deserializedData) {
        std::cout << "Success: The deserialized pointer matches the original pointer.\n";
    } else {
        std::cout << "Error: The deserialized pointer does not match the original pointer.\n";
    }

    return 0;
}
