/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import </libobjc.A.h>

@protocol RTFCPZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface RTFCPZEntry : NSObject {
	id<RTFCPZArchiveInputStream> mInput;	// 4 = 0x4
	int mCompressionMethod;	// 8 = 0x8
	unsigned long long mCompressedSize;	// 12 = 0xc
	unsigned long long mUncompressedSize;	// 20 = 0x14
	unsigned long long mOffset;	// 28 = 0x1c
	unsigned mCrc;	// 36 = 0x24
}
- (id)initFromCentralFileHeader:(const char *)centralFileHeader inputStream:(id)stream;	// 0x2f300839
- (void)copyToFile:(id)file;	// 0x2f300e3d
- (id)data;	// 0x2f300cfd
- (void)dealloc;	// 0x2f300a79
- (id)inputStream;	// 0x2f300ac5
@end

