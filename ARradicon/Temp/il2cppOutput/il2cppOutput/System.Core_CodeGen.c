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
	5022,
	5204,
	5204,
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
	{ (Il2CppRGCTXDataType)2, 2381 },
	{ (Il2CppRGCTXDataType)3, 9675 },
	{ (Il2CppRGCTXDataType)2, 3869 },
	{ (Il2CppRGCTXDataType)2, 3342 },
	{ (Il2CppRGCTXDataType)3, 17197 },
	{ (Il2CppRGCTXDataType)2, 2464 },
	{ (Il2CppRGCTXDataType)2, 3349 },
	{ (Il2CppRGCTXDataType)3, 17232 },
	{ (Il2CppRGCTXDataType)2, 3344 },
	{ (Il2CppRGCTXDataType)3, 17209 },
	{ (Il2CppRGCTXDataType)2, 2382 },
	{ (Il2CppRGCTXDataType)3, 9676 },
	{ (Il2CppRGCTXDataType)2, 3892 },
	{ (Il2CppRGCTXDataType)2, 3354 },
	{ (Il2CppRGCTXDataType)3, 17247 },
	{ (Il2CppRGCTXDataType)2, 2482 },
	{ (Il2CppRGCTXDataType)2, 3362 },
	{ (Il2CppRGCTXDataType)3, 17411 },
	{ (Il2CppRGCTXDataType)2, 3358 },
	{ (Il2CppRGCTXDataType)3, 17322 },
	{ (Il2CppRGCTXDataType)2, 781 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1415 },
	{ (Il2CppRGCTXDataType)3, 6701 },
	{ (Il2CppRGCTXDataType)2, 783 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1425 },
	{ (Il2CppRGCTXDataType)3, 6706 },
	{ (Il2CppRGCTXDataType)2, 1035 },
	{ (Il2CppRGCTXDataType)3, 1707 },
	{ (Il2CppRGCTXDataType)3, 1708 },
	{ (Il2CppRGCTXDataType)2, 2141 },
	{ (Il2CppRGCTXDataType)2, 1628 },
	{ (Il2CppRGCTXDataType)2, 1736 },
	{ (Il2CppRGCTXDataType)2, 1838 },
	{ (Il2CppRGCTXDataType)2, 2142 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)2, 1737 },
	{ (Il2CppRGCTXDataType)2, 1839 },
	{ (Il2CppRGCTXDataType)2, 1738 },
	{ (Il2CppRGCTXDataType)2, 1840 },
	{ (Il2CppRGCTXDataType)3, 6702 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)2, 1729 },
	{ (Il2CppRGCTXDataType)2, 1730 },
	{ (Il2CppRGCTXDataType)2, 1836 },
	{ (Il2CppRGCTXDataType)3, 6700 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)2, 1835 },
	{ (Il2CppRGCTXDataType)3, 6699 },
	{ (Il2CppRGCTXDataType)2, 1627 },
	{ (Il2CppRGCTXDataType)2, 1735 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)3, 20341 },
	{ (Il2CppRGCTXDataType)3, 6000 },
	{ (Il2CppRGCTXDataType)2, 1325 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)2, 1837 },
	{ (Il2CppRGCTXDataType)2, 1932 },
	{ (Il2CppRGCTXDataType)3, 9677 },
	{ (Il2CppRGCTXDataType)3, 9679 },
	{ (Il2CppRGCTXDataType)2, 563 },
	{ (Il2CppRGCTXDataType)3, 9678 },
	{ (Il2CppRGCTXDataType)3, 9687 },
	{ (Il2CppRGCTXDataType)2, 2385 },
	{ (Il2CppRGCTXDataType)2, 3345 },
	{ (Il2CppRGCTXDataType)3, 17210 },
	{ (Il2CppRGCTXDataType)3, 9688 },
	{ (Il2CppRGCTXDataType)2, 1775 },
	{ (Il2CppRGCTXDataType)2, 1866 },
	{ (Il2CppRGCTXDataType)3, 6712 },
	{ (Il2CppRGCTXDataType)3, 20306 },
	{ (Il2CppRGCTXDataType)2, 3359 },
	{ (Il2CppRGCTXDataType)3, 17323 },
	{ (Il2CppRGCTXDataType)3, 9680 },
	{ (Il2CppRGCTXDataType)2, 2384 },
	{ (Il2CppRGCTXDataType)2, 3343 },
	{ (Il2CppRGCTXDataType)3, 17198 },
	{ (Il2CppRGCTXDataType)3, 6711 },
	{ (Il2CppRGCTXDataType)3, 9681 },
	{ (Il2CppRGCTXDataType)3, 20305 },
	{ (Il2CppRGCTXDataType)2, 3355 },
	{ (Il2CppRGCTXDataType)3, 17248 },
	{ (Il2CppRGCTXDataType)3, 9694 },
	{ (Il2CppRGCTXDataType)2, 2386 },
	{ (Il2CppRGCTXDataType)2, 3350 },
	{ (Il2CppRGCTXDataType)3, 17233 },
	{ (Il2CppRGCTXDataType)3, 10295 },
	{ (Il2CppRGCTXDataType)3, 4651 },
	{ (Il2CppRGCTXDataType)3, 6713 },
	{ (Il2CppRGCTXDataType)3, 4650 },
	{ (Il2CppRGCTXDataType)3, 9695 },
	{ (Il2CppRGCTXDataType)3, 20307 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)3, 17412 },
	{ (Il2CppRGCTXDataType)3, 9708 },
	{ (Il2CppRGCTXDataType)2, 2388 },
	{ (Il2CppRGCTXDataType)2, 3361 },
	{ (Il2CppRGCTXDataType)3, 17325 },
	{ (Il2CppRGCTXDataType)3, 9709 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)3, 6717 },
	{ (Il2CppRGCTXDataType)3, 6716 },
	{ (Il2CppRGCTXDataType)2, 3347 },
	{ (Il2CppRGCTXDataType)3, 17212 },
	{ (Il2CppRGCTXDataType)3, 20312 },
	{ (Il2CppRGCTXDataType)2, 3360 },
	{ (Il2CppRGCTXDataType)3, 17324 },
	{ (Il2CppRGCTXDataType)3, 9701 },
	{ (Il2CppRGCTXDataType)2, 2387 },
	{ (Il2CppRGCTXDataType)2, 3357 },
	{ (Il2CppRGCTXDataType)3, 17250 },
	{ (Il2CppRGCTXDataType)3, 6715 },
	{ (Il2CppRGCTXDataType)3, 6714 },
	{ (Il2CppRGCTXDataType)3, 9702 },
	{ (Il2CppRGCTXDataType)2, 3346 },
	{ (Il2CppRGCTXDataType)3, 17211 },
	{ (Il2CppRGCTXDataType)3, 20311 },
	{ (Il2CppRGCTXDataType)2, 3356 },
	{ (Il2CppRGCTXDataType)3, 17249 },
	{ (Il2CppRGCTXDataType)3, 9715 },
	{ (Il2CppRGCTXDataType)2, 2389 },
	{ (Il2CppRGCTXDataType)2, 3365 },
	{ (Il2CppRGCTXDataType)3, 17414 },
	{ (Il2CppRGCTXDataType)3, 10296 },
	{ (Il2CppRGCTXDataType)3, 4653 },
	{ (Il2CppRGCTXDataType)3, 6719 },
	{ (Il2CppRGCTXDataType)3, 6718 },
	{ (Il2CppRGCTXDataType)3, 4652 },
	{ (Il2CppRGCTXDataType)3, 9716 },
	{ (Il2CppRGCTXDataType)2, 3348 },
	{ (Il2CppRGCTXDataType)3, 17213 },
	{ (Il2CppRGCTXDataType)3, 20313 },
	{ (Il2CppRGCTXDataType)2, 3364 },
	{ (Il2CppRGCTXDataType)3, 17413 },
	{ (Il2CppRGCTXDataType)3, 6709 },
	{ (Il2CppRGCTXDataType)3, 6710 },
	{ (Il2CppRGCTXDataType)3, 6723 },
	{ (Il2CppRGCTXDataType)2, 3899 },
	{ (Il2CppRGCTXDataType)2, 1256 },
	{ (Il2CppRGCTXDataType)2, 1632 },
	{ (Il2CppRGCTXDataType)2, 3895 },
	{ (Il2CppRGCTXDataType)2, 1753 },
	{ (Il2CppRGCTXDataType)2, 1845 },
	{ (Il2CppRGCTXDataType)3, 6018 },
	{ (Il2CppRGCTXDataType)2, 1334 },
	{ (Il2CppRGCTXDataType)3, 7375 },
	{ (Il2CppRGCTXDataType)3, 7376 },
	{ (Il2CppRGCTXDataType)3, 7381 },
	{ (Il2CppRGCTXDataType)2, 1940 },
	{ (Il2CppRGCTXDataType)3, 7378 },
	{ (Il2CppRGCTXDataType)3, 21068 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 4640 },
	{ (Il2CppRGCTXDataType)1, 1703 },
	{ (Il2CppRGCTXDataType)2, 3903 },
	{ (Il2CppRGCTXDataType)3, 7377 },
	{ (Il2CppRGCTXDataType)1, 3903 },
	{ (Il2CppRGCTXDataType)1, 1940 },
	{ (Il2CppRGCTXDataType)2, 3960 },
	{ (Il2CppRGCTXDataType)2, 3903 },
	{ (Il2CppRGCTXDataType)3, 15282 },
	{ (Il2CppRGCTXDataType)3, 7382 },
	{ (Il2CppRGCTXDataType)3, 7383 },
	{ (Il2CppRGCTXDataType)3, 7380 },
	{ (Il2CppRGCTXDataType)3, 7379 },
	{ (Il2CppRGCTXDataType)2, 439 },
	{ (Il2CppRGCTXDataType)3, 4654 },
	{ (Il2CppRGCTXDataType)2, 573 },
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
