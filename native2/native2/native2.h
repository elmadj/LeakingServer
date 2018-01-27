// Le bloc ifdef suivant est la fa�on standard de cr�er des macros qui facilitent l'exportation 
// � partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compil�s avec le symbole NATIVE2_EXPORTS
// d�fini sur la ligne de commande. Ce symbole ne doit pas �tre d�fini pour un projet
// qui utilisent cette DLL. De cette mani�re, les autres projets dont les fichiers sources comprennent ce fichier consid�rent les fonctions 
// NATIVE2_API comme �tant import�es � partir d'une DLL, tandis que cette DLL consid�re les symboles
// d�finis avec cette macro comme �tant export�s.
#ifdef NATIVE2_EXPORTS
#define NATIVE2_API __declspec(dllexport)
#else
#define NATIVE2_API __declspec(dllimport)
#endif

// Cette classe est export�e de native2.dll
class NATIVE2_API Cnative2 {
public:
	Cnative2(void);
	~Cnative2(void);
	// TODO: ajoutez ici vos m�thodes.
};

extern NATIVE2_API int nnative2;

NATIVE2_API int fnnative2(void);
