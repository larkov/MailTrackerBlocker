//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

@interface _MCMimeEnrichedReader : NSObject
{
    CDStruct_2ada2998 _inputBuffer;	// 8 = 0x8
    long long _currentIndex;	// 192 = 0xc0
    long long _inputLength;	// 200 = 0xc8
    unsigned int _noFillLevel:30;	// 208 = 0xd0
    unsigned int _eatOneNewline:1;	// 211 = 0xd3
    unsigned int _insideComment:1;	// 211 = 0xd3
    long long _lastQuoteLevel;	// 216 = 0xd8
    NSMutableArray *_commandStack;	// 224 = 0xe0
    NSMutableString *_outputString;	// 232 = 0xe8
    NSMutableString *_outputBuffer;	// 240 = 0xf0
    BOOL outputShouldBeHTML;	// 248 = 0xf8
}

// - (void).cxx_destruct;	// IMP=0x000000000006eb9e
- (id)description;	// IMP=0x000000000006eafa
- (id)debugDescription;	// IMP=0x000000000006e8ae
- (void)convertEnrichedString:(id)arg1 intoPlainOutputString:(id)arg2;	// IMP=0x000000000006e738
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;	// IMP=0x000000000006e5a3
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;	// IMP=0x000000000006e39a
- (long long)readTokenInto:(id *)arg1;	// IMP=0x000000000006df1f
- (id)copyCommand;	// IMP=0x000000000006ddb8
- (id)copyNextTokenWithDelimiters:(id)arg1;	// IMP=0x000000000006da34
- (id)currentFont;	// IMP=0x000000000006da25
- (void)parseParameterString:(id)arg1;	// IMP=0x000000000006d705
- (void)endCommand:(id)arg1;	// IMP=0x000000000006d565
- (void)beginCommand:(id)arg1;	// IMP=0x000000000006d360
- (void)setupFontStackEntry:(id)arg1;	// IMP=0x000000000006d1b9
- (void)handleNoParameterCommand:(const CDStruct_8e792ae2 *)arg1;	// IMP=0x000000000006d065
- (void)closeUpQuoting;	// IMP=0x000000000006cff7
- (void)fixConsecutiveSpaces:(id)arg1;	// IMP=0x000000000006ccc8
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;	// IMP=0x000000000006c4e5
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;	// IMP=0x000000000006c3dd
- (void)appendStringToBuffer:(id)arg1;	// IMP=0x000000000006c33c
- (id)init;	// IMP=0x000000000006c301
- (id)parenthesesSet;	// IMP=0x000000000006c295
- (id)punctuationSet;	// IMP=0x000000000006c229

@end

