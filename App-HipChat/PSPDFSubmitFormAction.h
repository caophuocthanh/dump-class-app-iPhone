//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAbstractFormAction.h"

@class NSURL;

@interface PSPDFSubmitFormAction : PSPDFAbstractFormAction
{
    NSURL *_URL;
    unsigned int _flags;
}

+ (id)propertyKeys;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)localizedDescriptionWithDocumentProvider:(id)arg1;
- (id)initWithPDFDictionary:(struct CGPDFDictionary *)arg1 documentRef:(struct CGPDFDocument *)arg2;
- (id)initWithURL:(id)arg1 flags:(unsigned int)arg2;
- (id)init;

@end

