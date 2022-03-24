class Pilha {
    private:
        int contador;
        int capacidade;
        int conteudo[MAX];
    public:
        Pilha();
        bool vazia();
        bool cheia();
        bool empilhar(int valor);
        bool desempilhar(int &valor);
        bool retornaTopo(int &valor);
		void pilhainverter();
		int v_menor();
		int v_maior();
		float media();
		bool palindromo();
	};

