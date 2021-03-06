//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFDatabaseManagerDelegate.h"

@class NSString, PSPDFDatabaseManager;

@interface PSPDFDocumentIndex : NSObject <PSPDFDatabaseManagerDelegate>
{
    NSString *_path;
    NSString *_UID;
    PSPDFDatabaseManager *_dbQueue;
    id <PSPDFDocumentIndexDelegate> _delegate;
    CDUnknownBlockType _encryptionKeyProvider;
}

@property(copy, nonatomic) CDUnknownBlockType encryptionKeyProvider; // @synthesize encryptionKeyProvider=_encryptionKeyProvider;
@property(nonatomic) __weak id <PSPDFDocumentIndexDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PSPDFDatabaseManager *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(readonly, copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)escapeStringArrayForSqlite:(id)arg1;
- (void)registerCompressionFunctionsInDB:(id)arg1;
- (unsigned int)modelVersionForDatabaseManager:(id)arg1;
- (void)databaseManager:(id)arg1 destroyTablesInDatabase:(id)arg2;
- (void)databaseManager:(id)arg1 createTablesInDatabase:(id)arg2;
- (id)fonts;
- (id)textParserForPage:(unsigned int)arg1;
- (BOOL)deleteDatabaseWithError:(id *)arg1;
- (BOOL)openDatabase;
- (void)saveTextParser:(id)arg1 page:(unsigned int)arg2 document:(id)arg3 fontCacheKeys:(id)arg4 db:(id)arg5;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 UID:(id)arg2 encryptionKeyProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

