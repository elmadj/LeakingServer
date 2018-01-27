// Le bloc ifdef suivant est la façon standard de créer des macros qui facilitent l'exportation 
// à partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compilés avec le symbole NATIVE2_EXPORTS
// défini sur la ligne de commande. Ce symbole ne doit pas être défini pour un projet
// qui utilisent cette DLL. De cette manière, les autres projets dont les fichiers sources comprennent ce fichier considèrent les fonctions 
// NATIVE2_API comme étant importées à partir d'une DLL, tandis que cette DLL considère les symboles
// définis avec cette macro comme étant exportés.
#ifdef NATIVE2_EXPORTS
#define NATIVE2_API __declspec(dllexport)
#else
#define NATIVE2_API __declspec(dllimport)
#endif

// Cette classe est exportée de native2.dll
class NATIVE2_API Cnative2 {
public:
	Cnative2(void);
	~Cnative2(void);
	// TODO: ajoutez ici vos méthodes.
};

extern NATIVE2_API int nnative2;

NATIVE2_API int fnnative2(void);
