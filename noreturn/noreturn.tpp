#ifndef SNNS_NORETURN_TPP
#define SNNS_NORETURN_TPP

#define SNNS_NORETURN_BAD_NAME_DONT_USE Wrapper ## __line__ ## STOP ## __line__

struct SNNS_NORETURN_BAD_NAME_DONT_USE
{
    int const & underlying;
};

// namespace
// {
//     namespace snns
//     {
//         inline SNNS_NORETURN_BAD_NAME_DONT_USE wrap(int const & i)
//         {
//             return SNNS_NORETURN_BAD_NAME_DONT_USE{i};
//         }
//     }
// }

#endif // SNNS_NORETURN_TPP