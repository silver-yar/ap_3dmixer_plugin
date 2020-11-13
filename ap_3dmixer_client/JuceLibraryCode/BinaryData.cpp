/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== parameters.proto ==================
static const unsigned char temp_binary_data_0[] =
"// ap_3dmixer parameter message data structure\n"
"syntax = \"proto3\";\n"
"\n"
"package aproto;\n"
"\n"
"// Message Start\n"
"message Parameter {\n"
"    string name = 1;\n"
"    float value = 2;\n"
"}\n"
"\n"
"message Parameters {\n"
"    repeated Parameter parameters = 1;\n"
"}";

const char* parameters_proto = (const char*) temp_binary_data_0;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x93b15753:  numBytes = 227; return parameters_proto;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "parameters_proto"
};

const char* originalFilenames[] =
{
    "parameters.proto"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
    {
        if (namedResourceList[i] == resourceNameUTF8)
            return originalFilenames[i];
    }

    return nullptr;
}

}
