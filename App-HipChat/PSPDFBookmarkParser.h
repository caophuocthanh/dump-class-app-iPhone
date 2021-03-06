//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, PSPDFDocument;

@interface PSPDFBookmarkParser : NSObject
{
    NSMutableArray *_bookmarks;
    PSPDFDocument *_document;
    NSObject<OS_dispatch_queue> *_bookmarkQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bookmarkQueue; // @synthesize bookmarkQueue=_bookmarkQueue;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)saveBookmarksWithError:(id *)arg1;
- (id)loadBookmarksWithError:(id *)arg1;
- (id)legacyBookmarkPath;
- (id)bookmarkPath;
- (id)bookmarkForPage:(unsigned int)arg1;
- (BOOL)clearAllBookmarksWithError:(id *)arg1;
- (BOOL)removeBookmarkForPage:(unsigned int)arg1;
- (BOOL)addBookmarkForPage:(unsigned int)arg1;
- (BOOL)addBookmark:(id)arg1;
- (void)parseBookmarksIfRequiredNotLocked;
- (void)parseBookmarksIfRequired;
@property(copy, nonatomic) NSArray *bookmarks;
- (id)bookmarksNotLocked;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (Class)classForClass:(Class)arg1;

@end

