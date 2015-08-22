//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFastEnumeration.h"

@class NSArray, NSPredicate, NSString, RLMObject, RLMRealm, RLMResults;

@protocol RLMCollection <NSFastEnumeration>
@property(readonly, nonatomic) RLMRealm *realm;
@property(readonly, copy, nonatomic) NSString *objectClassName;
@property(readonly, nonatomic) unsigned int count;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (RLMResults *)sortedResultsUsingDescriptors:(NSArray *)arg1;
- (RLMResults *)sortedResultsUsingProperty:(NSString *)arg1 ascending:(BOOL)arg2;
- (RLMResults *)objectsWithPredicate:(NSPredicate *)arg1;
- (RLMResults *)objectsWhere:(NSString *)arg1;
- (unsigned int)indexOfObjectWithPredicate:(NSPredicate *)arg1;
- (unsigned int)indexOfObjectWhere:(NSString *)arg1;
- (unsigned int)indexOfObject:(RLMObject *)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndex:(unsigned int)arg1;
@end
