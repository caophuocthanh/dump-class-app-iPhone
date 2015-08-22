//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFModel.h"

@class PSPDFSignaturePropBuildEntry;

@interface PSPDFSignaturePropBuild : PSPDFModel
{
    PSPDFSignaturePropBuildEntry *_filter;
    PSPDFSignaturePropBuildEntry *_pubSec;
    PSPDFSignaturePropBuildEntry *_app;
    PSPDFSignaturePropBuildEntry *_sigQ;
}

+ (id)propertyKeys;
@property(copy, nonatomic) PSPDFSignaturePropBuildEntry *sigQ; // @synthesize sigQ=_sigQ;
@property(copy, nonatomic) PSPDFSignaturePropBuildEntry *app; // @synthesize app=_app;
@property(copy, nonatomic) PSPDFSignaturePropBuildEntry *pubSec; // @synthesize pubSec=_pubSec;
@property(copy, nonatomic) PSPDFSignaturePropBuildEntry *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)writePDFDataTo:(id)arg1;
- (id)initWithCGPDFDictionary:(struct CGPDFDictionary *)arg1;

@end
