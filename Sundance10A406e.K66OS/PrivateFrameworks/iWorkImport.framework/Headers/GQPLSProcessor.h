/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQPProcessor.h"


@interface GQPLSProcessor : GQPProcessor {
	Class mGenerator;	// 64 = 0x40
}
- (id)initWithPath:(id)path indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path4 previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator zipArchive:(id)archive cryptoKey:(id)key;	// 0x32482cb9
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper generator:(Class)generator;	// 0x32482df1
- (Class)generator;	// 0x32483115
- (BOOL)go;	// 0x32483009
- (void)pushInitialState;	// 0x32482f25
@end
