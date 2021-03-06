/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x3730f369
+ (id)data;	// 0x37331a51
+ (id)dataWithBytes:(const void *)bytes length:(unsigned)length;	// 0x3732f039
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x3730f325
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x37321411
+ (id)dataWithContentsOfFile:(id)file;	// 0x37321a8d
+ (id)dataWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3734d125
+ (id)dataWithContentsOfMappedFile:(id)mappedFile;	// 0x3734fe41
+ (id)dataWithContentsOfURL:(id)url;	// 0x3736c6bd
+ (id)dataWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3736c6fd
+ (id)dataWithData:(id)data;	// 0x3734f101
+ (BOOL)supportsSecureCoding;	// 0x3736c359
- (id)initWithBase64Encoding:(id)base64Encoding;	// 0x373568c9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x3732f07d
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x3736c749
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x3730f3b1
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3732145d
- (id)initWithCoder:(id)coder;	// 0x37347b91
- (id)initWithContentsOfFile:(id)file;	// 0x3730f7e5
- (id)initWithContentsOfFile:(id)file error:(id *)error;	// 0x3736c97d
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3734d76d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x373170ad
- (id)initWithContentsOfMappedFile:(id)mappedFile error:(id *)error;	// 0x3736c95d
- (id)initWithContentsOfURL:(id)url;	// 0x373385ad
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3736c759
- (id)initWithData:(id)data;	// 0x37347efd
- (BOOL)_allowsDirectEncoding;	// 0x3736c35d
- (id)_asciiDescription;	// 0x3736c275
- (BOOL)_bytesAreVM;	// 0x3736c361
- (unsigned long)_cfTypeID;	// 0x37320a95
- (id)base64Encoding;	// 0x373564e1
- (const void *)bytes;	// 0x3736bf99
- (Class)classForCoder;	// 0x3734a3a5
- (id)copyWithZone:(NSZone *)zone;	// 0x37356b45
- (id)description;	// 0x3736bfbd
- (void)encodeWithCoder:(id)coder;	// 0x37344735
- (void)getBytes:(void *)bytes;	// 0x37343f55
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x3736c365
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x3736c3e5
- (unsigned)hash;	// 0x3734f16d
- (BOOL)isEqual:(id)equal;	// 0x37339c79
- (BOOL)isEqualToData:(id)data;	// 0x3733e065
- (unsigned)length;	// 0x3736bf75
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x373518ad
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x3736c99d
- (id)subdataWithRange:(NSRange)range;	// 0x373518dd
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x37335ec1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically error:(id *)error;	// 0x3736c691
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x37345e79
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3734b931
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3736c589
@end

@interface NSData (NSKindOfAdditions)
- (BOOL)isNSData__;	// 0x3733e061
@end

@interface NSData (NSURLExtras)
- (id)_replaceCString:(const char *)string withCString:(const char *)cstring;	// 0x373c0a2d
- (id)_web_guessedMIMEType;	// 0x373c02e9
- (id)_web_guessedMIMETypeForExtension:(id)extension;	// 0x373c052d
- (id)_web_guessedMIMETypeForXML;	// 0x373c01c9
- (id)_web_parseRFC822HeaderFields;	// 0x373c05b5
@end

@interface NSData (NSDataPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3745980d
@end

