//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFDatabaseManagerDelegate.h"

@class NSString, PSPDFDatabaseManager;

@interface PSPDFDiskCacheDatabase : NSObject <PSPDFDatabaseManagerDelegate>
{
    NSString *_databaseDirectoryPath;
    NSString *_databaseFilePath;
    PSPDFDatabaseManager *_databaseQueue;
}

@property(retain, nonatomic) PSPDFDatabaseManager *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(readonly, nonatomic) NSString *databaseFilePath; // @synthesize databaseFilePath=_databaseFilePath;
@property(readonly, nonatomic) NSString *databaseDirectoryPath; // @synthesize databaseDirectoryPath=_databaseDirectoryPath;
- (void).cxx_destruct;
- (unsigned int)modelVersionForDatabaseManager:(id)arg1;
- (void)databaseManager:(id)arg1 destroyTablesInDatabase:(id)arg2;
- (void)databaseManager:(id)arg1 createTablesInDatabase:(id)arg2;
- (void)clearDatabase;
- (void)saveCachedObjects:(id)arg1;
- (id)loadLRUList;
@property(readonly, nonatomic) NSString *databaseFileName;
- (id)initWithDatabaseDirectory:(id)arg1 fileManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

