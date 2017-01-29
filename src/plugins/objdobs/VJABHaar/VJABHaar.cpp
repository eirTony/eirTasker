#include "VJABHaar.h"

#include "HaarCascade.h"

VJABHaar::VJABHaar(void)
    : mpCascade(new HaarCascade)
{
}

HaarCascade * VJABHaar::cascade(void)
{
    return mpCascade;
}
