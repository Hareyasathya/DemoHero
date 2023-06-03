//class hero

class Hero {
	public:
		Hero();
		~Hero();
		void locate(int x, int y);
		void move_forward();
		void move_backward();
		void move_left();
		void move_right();
		void draw();
		
	private:
		int posX;
		int posY;
};
