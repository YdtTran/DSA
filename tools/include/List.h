// List interface


template <typename T> class List {
	private:
	size_t length = 0;

	public:
	using value_type = T;
	using size_type	 = std::size_t;

	virtual ~List () = default;

	virtual bool empty () const noexcept				= 0;
	virtual size_type size () const noexcept			= 0;
	virtual void push_back (const T& value)				= 0;
	virtual void insert (size_type pos, const T& value) = 0;
	virtual void clear ()								= 0;

	// Optional: iterator interface for standard compliance
	class Iterator {
		public:
		using iterator_category = std::forward_iterator_tag;
		using value_type		= T;
		using difference_type	= std::ptrdiff_t;
		using pointer			= T*;
		using reference			= T&;

		virtual ~Iterator ()								  = default;
		virtual Iterator& operator++ ()						  = 0;
		virtual T& operator* () const						  = 0;
		virtual bool operator!= (const Iterator& other) const = 0;
	};

	virtual Iterator* begin () = 0;
	virtual Iterator* end ()   = 0;
};