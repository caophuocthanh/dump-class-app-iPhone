//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FBStickerResourceMap : NSObject
{
    NSMutableDictionary *_resourceMap;
    NSString *_stickerRootDirectoryPath;
}

- (void).cxx_destruct;
- (id)_filePath;
- (void)loadMapFromDisk;
- (BOOL)saveMapToDisk;
- (id)resourcesForKey:(id)arg1;
- (void)removeResourcesForKey:(id)arg1;
- (void)addResource:(id)arg1 forKey:(id)arg2;
- (id)initWithStoragePath:(id)arg1;

@end

