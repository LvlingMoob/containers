#ifndef VECTOR_HPP
# define VECTOR_HPP

template <class T, class Alloc = allocator<T>>
class Vector
{
	public:
		Vector(/* args */);
		~Vector();

		Vector	&operator=(Vector);

	// ITERATOR --------------------------
		iterator begin();
		const_iterator begin() const;

		iterator end();
		const_iterator end() const;

		reverse_iterator rbegin();
		const_reverse_iterator rbegin() const;i

		reverse_iterator rend();
		const_reverse_iterator rend() const;

		const_iterator cbegin() const noexcept;
		const_iterator cend() const noexcept;

		const_reverse_iterator crbegin() const noexcept;
		const_reverse_iterator crend() const noexcept;

	// CAPACITY  -------------------------
		size_type	size() const;
		size_type	max_size() const;
		size_type	capacity() const;
		void		reserve (size_type n);
		void		shrink_to_fit();
		void		resize (size_type n, value_type val = value_type());
		bool		empty() const;

	// ELEMENT ACCESS --------------------
		reference			operator[] (size_type n);
		const_reference		operator[] (size_type n) const;

		reference			at (size_type n);
		const_reference		at (size_type n) const;

		reference			front();
		const_reference		front() const;

		reference			back();
		const_reference		back() const;

		value_type*			data() noexcept;
		const value_type*	data() const noexcept;

	// MODIFIERS -------------------------
		template <class InputIterator>
  		  void assign (InputIterator first, InputIterator last);	
		void assign (size_type n, const value_type& val);

		void push_back (const value_type& val);
		void pop_back();
		void swap (vector& x);
		void clear();

		template <class InputIterator>
		  void 		insert (iterator position, InputIterator first, InputIterator last);
		iterator	insert (iterator position, const value_type& val);
		void		insert (iterator position, size_type n, const value_type& val);

		iterator erase (iterator position);
		iterator erase (iterator first, iterator last);

		template <class... Args>
		  iterator emplace (const_iterator position, Args&&... args);

		template <class... Args>
		  void emplace_back (Args&&... args);

	// ALLOCATOR -------------------------
		allocator_type get_allocator() const;

	// NON-MEMBER-FT 0VERLOAD ------------	
		template <class T, class Alloc>
  		  bool operator== (const Vector<T,Alloc>& lhs, const Vector<T,Alloc>& rhs);

		template <class T, class Alloc>
		  bool operator!= (const Vector<T,Alloc>& lhs, const Vector<T,Alloc>& rhs);

		template <class T, class Alloc>
		  bool operator<  (const Vector<T,Alloc>& lhs, const Vector<T,Alloc>& rhs);

		template <class T, class Alloc>
		  bool operator<= (const Vector<T,Alloc>& lhs, const Vector<T,Alloc>& rhs);

		template <class T, class Alloc>
		  bool operator>  (const Vector<T,Alloc>& lhs, const Vector<T,Alloc>& rhs);

		template <class T, class Alloc>
		  bool operator>= (const Vector<T,Alloc>& lhs, const Vector<T,Alloc>& rhs);

		template <class T, class Alloc>
		  void swap (vector<T,Alloc>& x, vector<T,Alloc>& y);

	// TEMPLATE SPECIALISATION -----------	
		template < class T, class Alloc = allocator<T> > class vector; // generic template
		template <class Alloc> class vector<bool,Alloc>;               // bool specialization

	private : 
	
};

#endif
