//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EditableWebMessageDocument.h"

@class DOMHTMLDocument;

@interface EditableWebMessageDocumentWK1 : EditableWebMessageDocument
{
    DOMHTMLDocument *_htmlDocument;	// 8 = 0x8
}

@property(retain, nonatomic) DOMHTMLDocument *htmlDocument; // @synthesize htmlDocument=_htmlDocument;
// - (void).cxx_destruct;	// IMP=0x000000010013d395
- (void)_addAttachmentsFromArchive:(id)arg1;	// IMP=0x000000010013d103
- (void)_addAttachmentsFromResource:(id)arg1;	// IMP=0x000000010013cfb9
- (id)_attachmentElementEnumeratorForRange:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x000000010013cf58
- (id)attachmentElementEnumeratorWithOptions:(unsigned long long)arg1;	// IMP=0x000000010013cf41
- (id)prepareToAddArchive:(id)arg1;	// IMP=0x000000010013cf0c
- (id)attachments;	// IMP=0x000000010013cef8
- (id)attachmentsInRange:(id)arg1;	// IMP=0x000000010013cc54
- (void)addMailDropBannerWithSize:(unsigned long long)arg1;	// IMP=0x000000010013ca9e

@end
