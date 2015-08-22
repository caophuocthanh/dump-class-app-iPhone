//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBConsistentLookasidePersistence;

@interface FBConsistentLookasideObjectContext : NSObject
{
    FBConsistentLookasidePersistence *_persistence;
    struct unordered_map<std::__1::pair<NSString *, NSString *>, FBConsistentLookasideRecord *, (anonymous namespace)::Hasher, (anonymous namespace)::EqualTo, std::__1::allocator<std::__1::pair<const std::__1::pair<NSString *, NSString *>, FBConsistentLookasideRecord *>>> _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)save:(id *)arg1 bytesWritten:(unsigned int *)arg2;
- (id)fetchObjectWithPrimaryKey:(id)arg1 typeName:(id)arg2;
- (id)createRecordForPrimaryKey:(id)arg1 typeName:(id)arg2;
- (id)fetchObjectsForPrimaryKeys:(id)arg1 typeName:(id)arg2;
- (id)initWithPersistence:(id)arg1;

@end
