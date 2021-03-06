//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSPDFProcessor : NSObject
{
}

+ (BOOL)embedAnnotations:(id)arg1 fileURL:(id)arg2 outputData:(id)arg3 options:(id)arg4 pageInfos:(id)arg5 error:(id *)arg6;
+ (id)conversionOperationQueue;
+ (id)defaultProcessor;
- (void)renderDocument:(id)arg1 inContext:(struct CGContext *)arg2 pageRange:(id)arg3 options:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)annotationsForDocument:(id)arg1 ofType:(unsigned int)arg2 inPageRanges:(id)arg3;
- (id)documentInfoWithTitle:(id)arg1;
- (id)documentInfoForDocument:(id)arg1;
- (id)baseDocumentInfo;
- (id)generatePDFFromURL:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)generatePDFFromURL:(id)arg1 outputFileURL:(id)arg2 options:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)generatePDFFromHTMLString:(id)arg1 outputFileURL:(id)arg2 data:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)generatePDFFromHTMLString:(id)arg1 outputFileURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)generatePDFFromHTMLString:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)generatePDFFromDocument:(id)arg1 pageRanges:(id)arg2 outputFileURL:(id)arg3 outputData:(id)arg4 options:(id)arg5 progressBlock:(CDUnknownBlockType)arg6 error:(id *)arg7;
- (id)generatePDFFromDocument:(id)arg1 pageRanges:(id)arg2 options:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (BOOL)generatePDFFromDocument:(id)arg1 pageRanges:(id)arg2 outputFileURL:(id)arg3 options:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;

@end

