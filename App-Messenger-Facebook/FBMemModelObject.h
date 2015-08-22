//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBModelObjectProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FBMemModelObject : NSObject <FBModelObjectProtocol, NSCoding, NSCopying>
{
    struct unique_ptr<facebook::mobile::FBMemModel::detail::IVarArray, std::__1::default_delete<facebook::mobile::FBMemModel::detail::IVarArray>> _ivars;
    struct unique_ptr<facebook::mobile::FBMemModel::detail::RecordAndSnapshot, std::__1::default_delete<facebook::mobile::FBMemModel::detail::RecordAndSnapshot>> _ras;
}

+ (const struct ClassMetadata *)classMetadata;
+ (id)newFromRecord:(const shared_ptr_d8dd3219 *)arg1 source:(const shared_ptr_4b749c87 *)arg2;
+ (id)primaryKeyKeyPath;
+ (id)builder;
+ (Class)correspondingBuilderClass;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)graphQLTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initExperimentWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (shared_ptr_d8dd3219)record;
- (const shared_ptr_4b749c87 *)graph;
- (struct RecordAndSnapshot *)ras;
- (struct IVarArray *)ivars;
- (BOOL)usingGraphStore;
- (BOOL)isEqualToMemModelObject:(id)arg1;
- (id)initWithRecord:(const shared_ptr_d8dd3219 *)arg1 source:(const shared_ptr_4b749c87 *)arg2 cache:(struct MemModelObjectFieldCache *)arg3;
- (id)init;
- (void)accept:(struct FBMemModelVisitor *)arg1 comingFromParentProperty:(struct FBMemModelPropertyHandle)arg2 atIndex:(int)arg3 graphQLResponseKey:(const char *)arg4;
- (void)accept:(struct FBMemModelVisitor *)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
- (void)applyUpdate:(id)arg1 forDescription:(const struct FBConsistentFieldDescription *)arg2;
- (vector_70fe7ab3)getFieldsToUpdate:(id)arg1 queriedFieldSets:(const vector_14182239 *)arg2 consistencyConfig:(const struct FBConsistencyConfig *)arg3 updateReasons:(struct vector<FBMemModelUpdateReason, std::__1::allocator<FBMemModelUpdateReason>> *)arg4;
- (BOOL)isInstanceOfInterfaceOrUnionGraphQLType:(id)arg1;
- (BOOL)isInstanceOfConcreteGraphQLType:(id)arg1;
- (id)copyBuilder;
- (id)updateBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
