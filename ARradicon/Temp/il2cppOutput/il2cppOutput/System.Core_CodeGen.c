#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005C System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005F System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000060 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000061 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000062 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[98] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[98] = 
{
	5131,
	5319,
	5319,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 23 } },
	{ 0x02000011, { 170, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[172] = 
{
	{ (Il2CppRGCTXDataType)2, 2395 },
	{ (Il2CppRGCTXDataType)3, 9834 },
	{ (Il2CppRGCTXDataType)2, 3901 },
	{ (Il2CppRGCTXDataType)2, 3362 },
	{ (Il2CppRGCTXDataType)3, 17464 },
	{ (Il2CppRGCTXDataType)2, 2479 },
	{ (Il2CppRGCTXDataType)2, 3369 },
	{ (Il2CppRGCTXDataType)3, 17499 },
	{ (Il2CppRGCTXDataType)2, 3364 },
	{ (Il2CppRGCTXDataType)3, 17476 },
	{ (Il2CppRGCTXDataType)2, 2396 },
	{ (Il2CppRGCTXDataType)3, 9835 },
	{ (Il2CppRGCTXDataType)2, 3926 },
	{ (Il2CppRGCTXDataType)2, 3374 },
	{ (Il2CppRGCTXDataType)3, 17514 },
	{ (Il2CppRGCTXDataType)2, 2497 },
	{ (Il2CppRGCTXDataType)2, 3382 },
	{ (Il2CppRGCTXDataType)3, 17678 },
	{ (Il2CppRGCTXDataType)2, 3378 },
	{ (Il2CppRGCTXDataType)3, 17589 },
	{ (Il2CppRGCTXDataType)2, 785 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1429 },
	{ (Il2CppRGCTXDataType)3, 6842 },
	{ (Il2CppRGCTXDataType)2, 787 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1439 },
	{ (Il2CppRGCTXDataType)3, 6847 },
	{ (Il2CppRGCTXDataType)2, 1039 },
	{ (Il2CppRGCTXDataType)3, 1719 },
	{ (Il2CppRGCTXDataType)3, 1720 },
	{ (Il2CppRGCTXDataType)2, 2155 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)2, 1750 },
	{ (Il2CppRGCTXDataType)2, 1852 },
	{ (Il2CppRGCTXDataType)2, 2156 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)2, 1751 },
	{ (Il2CppRGCTXDataType)2, 1853 },
	{ (Il2CppRGCTXDataType)2, 1752 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)3, 6843 },
	{ (Il2CppRGCTXDataType)2, 1267 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)2, 1850 },
	{ (Il2CppRGCTXDataType)3, 6841 },
	{ (Il2CppRGCTXDataType)2, 1742 },
	{ (Il2CppRGCTXDataType)2, 1849 },
	{ (Il2CppRGCTXDataType)3, 6840 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)2, 1640 },
	{ (Il2CppRGCTXDataType)3, 20676 },
	{ (Il2CppRGCTXDataType)3, 6134 },
	{ (Il2CppRGCTXDataType)2, 1338 },
	{ (Il2CppRGCTXDataType)2, 1746 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)2, 1946 },
	{ (Il2CppRGCTXDataType)3, 9836 },
	{ (Il2CppRGCTXDataType)3, 9838 },
	{ (Il2CppRGCTXDataType)2, 567 },
	{ (Il2CppRGCTXDataType)3, 9837 },
	{ (Il2CppRGCTXDataType)3, 9846 },
	{ (Il2CppRGCTXDataType)2, 2399 },
	{ (Il2CppRGCTXDataType)2, 3365 },
	{ (Il2CppRGCTXDataType)3, 17477 },
	{ (Il2CppRGCTXDataType)3, 9847 },
	{ (Il2CppRGCTXDataType)2, 1789 },
	{ (Il2CppRGCTXDataType)2, 1880 },
	{ (Il2CppRGCTXDataType)3, 6853 },
	{ (Il2CppRGCTXDataType)3, 20641 },
	{ (Il2CppRGCTXDataType)2, 3379 },
	{ (Il2CppRGCTXDataType)3, 17590 },
	{ (Il2CppRGCTXDataType)3, 9839 },
	{ (Il2CppRGCTXDataType)2, 2398 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)3, 17465 },
	{ (Il2CppRGCTXDataType)3, 6852 },
	{ (Il2CppRGCTXDataType)3, 9840 },
	{ (Il2CppRGCTXDataType)3, 20640 },
	{ (Il2CppRGCTXDataType)2, 3375 },
	{ (Il2CppRGCTXDataType)3, 17515 },
	{ (Il2CppRGCTXDataType)3, 9853 },
	{ (Il2CppRGCTXDataType)2, 2400 },
	{ (Il2CppRGCTXDataType)2, 3370 },
	{ (Il2CppRGCTXDataType)3, 17500 },
	{ (Il2CppRGCTXDataType)3, 10470 },
	{ (Il2CppRGCTXDataType)3, 4751 },
	{ (Il2CppRGCTXDataType)3, 6854 },
	{ (Il2CppRGCTXDataType)3, 4750 },
	{ (Il2CppRGCTXDataType)3, 9854 },
	{ (Il2CppRGCTXDataType)3, 20642 },
	{ (Il2CppRGCTXDataType)2, 3383 },
	{ (Il2CppRGCTXDataType)3, 17679 },
	{ (Il2CppRGCTXDataType)3, 9867 },
	{ (Il2CppRGCTXDataType)2, 2402 },
	{ (Il2CppRGCTXDataType)2, 3381 },
	{ (Il2CppRGCTXDataType)3, 17592 },
	{ (Il2CppRGCTXDataType)3, 9868 },
	{ (Il2CppRGCTXDataType)2, 1792 },
	{ (Il2CppRGCTXDataType)2, 1883 },
	{ (Il2CppRGCTXDataType)3, 6858 },
	{ (Il2CppRGCTXDataType)3, 6857 },
	{ (Il2CppRGCTXDataType)2, 3367 },
	{ (Il2CppRGCTXDataType)3, 17479 },
	{ (Il2CppRGCTXDataType)3, 20647 },
	{ (Il2CppRGCTXDataType)2, 3380 },
	{ (Il2CppRGCTXDataType)3, 17591 },
	{ (Il2CppRGCTXDataType)3, 9860 },
	{ (Il2CppRGCTXDataType)2, 2401 },
	{ (Il2CppRGCTXDataType)2, 3377 },
	{ (Il2CppRGCTXDataType)3, 17517 },
	{ (Il2CppRGCTXDataType)3, 6856 },
	{ (Il2CppRGCTXDataType)3, 6855 },
	{ (Il2CppRGCTXDataType)3, 9861 },
	{ (Il2CppRGCTXDataType)2, 3366 },
	{ (Il2CppRGCTXDataType)3, 17478 },
	{ (Il2CppRGCTXDataType)3, 20646 },
	{ (Il2CppRGCTXDataType)2, 3376 },
	{ (Il2CppRGCTXDataType)3, 17516 },
	{ (Il2CppRGCTXDataType)3, 9874 },
	{ (Il2CppRGCTXDataType)2, 2403 },
	{ (Il2CppRGCTXDataType)2, 3385 },
	{ (Il2CppRGCTXDataType)3, 17681 },
	{ (Il2CppRGCTXDataType)3, 10471 },
	{ (Il2CppRGCTXDataType)3, 4753 },
	{ (Il2CppRGCTXDataType)3, 6860 },
	{ (Il2CppRGCTXDataType)3, 6859 },
	{ (Il2CppRGCTXDataType)3, 4752 },
	{ (Il2CppRGCTXDataType)3, 9875 },
	{ (Il2CppRGCTXDataType)2, 3368 },
	{ (Il2CppRGCTXDataType)3, 17480 },
	{ (Il2CppRGCTXDataType)3, 20648 },
	{ (Il2CppRGCTXDataType)2, 3384 },
	{ (Il2CppRGCTXDataType)3, 17680 },
	{ (Il2CppRGCTXDataType)3, 6850 },
	{ (Il2CppRGCTXDataType)3, 6851 },
	{ (Il2CppRGCTXDataType)3, 6864 },
	{ (Il2CppRGCTXDataType)2, 3933 },
	{ (Il2CppRGCTXDataType)2, 1268 },
	{ (Il2CppRGCTXDataType)2, 1646 },
	{ (Il2CppRGCTXDataType)2, 3929 },
	{ (Il2CppRGCTXDataType)2, 1767 },
	{ (Il2CppRGCTXDataType)2, 1859 },
	{ (Il2CppRGCTXDataType)3, 6152 },
	{ (Il2CppRGCTXDataType)2, 1347 },
	{ (Il2CppRGCTXDataType)3, 7516 },
	{ (Il2CppRGCTXDataType)3, 7517 },
	{ (Il2CppRGCTXDataType)3, 7522 },
	{ (Il2CppRGCTXDataType)2, 1954 },
	{ (Il2CppRGCTXDataType)3, 7519 },
	{ (Il2CppRGCTXDataType)3, 21417 },
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)3, 4740 },
	{ (Il2CppRGCTXDataType)1, 1717 },
	{ (Il2CppRGCTXDataType)2, 3937 },
	{ (Il2CppRGCTXDataType)3, 7518 },
	{ (Il2CppRGCTXDataType)1, 3937 },
	{ (Il2CppRGCTXDataType)1, 1954 },
	{ (Il2CppRGCTXDataType)2, 3994 },
	{ (Il2CppRGCTXDataType)2, 3937 },
	{ (Il2CppRGCTXDataType)3, 15533 },
	{ (Il2CppRGCTXDataType)3, 7523 },
	{ (Il2CppRGCTXDataType)3, 7524 },
	{ (Il2CppRGCTXDataType)3, 7521 },
	{ (Il2CppRGCTXDataType)3, 7520 },
	{ (Il2CppRGCTXDataType)2, 443 },
	{ (Il2CppRGCTXDataType)3, 4754 },
	{ (Il2CppRGCTXDataType)2, 577 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	98,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	172,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
