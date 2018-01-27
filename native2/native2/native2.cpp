// native2.cpp�: d�finit les fonctions export�es pour l'application DLL.
//

#include "stdafx.h"
#include "native2.h"
#include <memory>

// Il s'agit d'un exemple de variable export�e
NATIVE2_API int nnative2=0;

// Il s'agit d'un exemple de fonction export�e.
NATIVE2_API int fnnative2(void)
{
   thread_local std::shared_ptr<Cnative2> leak(new Cnative2());

   return 42;
}



#include "Windows.h"

Cnative2::Cnative2()
   {
   printf("CUNSTRUCTOR tid=%d", GetCurrentThreadId());
   }


Cnative2::~Cnative2()
   {
   printf("DESTRUCTOR tid=%d", GetCurrentThreadId());
   }
