//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox, MFMessageStore, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;
@protocol MCMessageDataSource;

@interface _TransferOperation : NSObject
{
    NSMutableArray *_sourceMessages;	// 8 = 0x8
    id _messagesForGmailLabelsToRemoveLock;	// 16 = 0x10
    NSMutableDictionary *_messagesForGmailLabelsToRemove;	// 24 = 0x18
    BOOL _editableDocuments;	// 32 = 0x20
    MFMessageStore *_sourceStore;	// 40 = 0x28
    MFMailbox *_destinationMailbox;	// 48 = 0x30
    NSArray *_unreadSourceMessages;	// 56 = 0x38
    NSSet *_destinationLibraryIDs;	// 64 = 0x40
}

@property(readonly, nonatomic) BOOL editableDocuments; // @synthesize editableDocuments=_editableDocuments;
@property(retain) NSSet *destinationLibraryIDs; // @synthesize destinationLibraryIDs=_destinationLibraryIDs;
@property(retain) NSArray *unreadSourceMessages; // @synthesize unreadSourceMessages=_unreadSourceMessages;
@property(readonly, nonatomic) MFMailbox *destinationMailbox; // @synthesize destinationMailbox=_destinationMailbox;
@property(readonly, nonatomic) MFMessageStore *sourceStore; // @synthesize sourceStore=_sourceStore;
// - (void).cxx_destruct;	// IMP=0x0000000100203d9a
@property(readonly, copy) NSDictionary *popMessagesForGmailLabelsToRemove;
- (void)addMessage:(id)arg1 forLabelsToRemove:(id)arg2;	// IMP=0x0000000100203b71
@property(readonly, copy) NSDictionary *messagesForGmailLabelsToRemove;
- (void)removeSourceMessages:(id)arg1;	// IMP=0x0000000100203ad5
- (void)addSourceMessage:(id)arg1;	// IMP=0x000000010006bf54
@property(retain, nonatomic) NSArray *sourceMessages;
@property(readonly) id <MCMessageDataSource> sourceLibraryStore;
- (id)init;	// IMP=0x0000000100203981
- (id)initWithSourceStore:(id)arg1 destinationMailbox:(id)arg2;	// IMP=0x00000001002038a1

@end
