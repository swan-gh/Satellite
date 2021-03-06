#pragma once

#include <Utility.h>

namespace Sat
{

/// @brief Holds information about a checkout
struct CheckoutInfo
{
	CheckoutInfo(){}

	CheckoutInfo(bool p_isCheckout, CStringWrapper&& p_checkoutRoot)
		: m_isCheckout(p_isCheckout)
		, m_checkoutRoot(std::move(p_checkoutRoot))
	{}

	/// @brief True if the path is determined to be part of a version controlled checkout
	bool m_isCheckout = false;
	/// @brief If m_isCheckout is true then this is:
	/// - nullptr if the checkout is bare
	/// - The path to the root of the checkout if it is not bare
	/// If m_isCheckout is false then this is nullptr.
	CStringWrapper m_checkoutRoot{};
};

}