//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString;

@interface IGDiskStore : NSObject
{
    NSString *_path;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)pathFromKey:(id)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)containsKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)dealloc;

@end

