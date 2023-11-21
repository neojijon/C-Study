#include <stdio.h>

// INTERFACE_TYPE�� Windows Ŀ���� winddk.h ��� ���Ͽ� ���ǵ� ������
typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

int main()
{

    for(INTERFACE_TYPE i = Internal; i < MaximumInterfaceType; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
