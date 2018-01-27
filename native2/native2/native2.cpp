// native2.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "native2.h"
#include <memory>

// Il s'agit d'un exemple de variable exportée
NATIVE2_API int nnative2=0;

// Il s'agit d'un exemple de fonction exportée.
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
