/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSURL.h> // Unknown library


@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x319f00b5
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x319f00c9
+ (id)allocWithZone:(NSZone *)zone;	// 0x319f0111
+ (id)fileURLWithPath:(id)path;	// 0x319f2255
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x319f26e1
- (id)init;	// 0x31a950b5
- (id)initFileURLWithPath:(id)path;	// 0x319f2295
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x319f2725
- (id)initWithCoder:(id)coder;	// 0x31a2f02d
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x31a950cd
- (id)initWithString:(id)string;	// 0x31a036a9
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x319f0185
- (unsigned long)_cfTypeID;	// 0x31a94e85
- (CFURLRef)_cfurl;	// 0x319e5c41
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x31a94ef5
- (void)_freeClients;	// 0x31a94f3d
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x31a94e89
- (BOOL)_isAbsolute;	// 0x31a2a7dd
- (BOOL)_isDeallocating;	// 0x31a94d9d
- (id)_relativeURLPath;	// 0x31a95079
- (BOOL)_tryRetain;	// 0x31a94d31
- (id)absoluteString;	// 0x31a036bd
- (id)absoluteURL;	// 0x31a0cc01
- (id)baseURL;	// 0x31a27435
- (id)copyWithZone:(NSZone *)zone;	// 0x31a27239
- (void)dealloc;	// 0x31a94f79
- (id)description;	// 0x31a273ad
- (void)encodeWithCoder:(id)coder;	// 0x31a2f181
- (void)finalize;	// 0x31a95009
- (id)fragment;	// 0x31a25e8d
- (unsigned)hash;	// 0x31a2e255
- (id)host;	// 0x319f1309
- (BOOL)isEqual:(id)equal;	// 0x31a207a9
- (BOOL)isFileURL;	// 0x319f9e1d
- (BOOL)isKindOfClass:(Class)aClass;	// 0x31a13df5
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x31a94e05
- (id)parameterString;	// 0x31a955f9
- (id)password;	// 0x31a95529
- (id)path;	// 0x319e5bf9
- (id)port;	// 0x31a28281
- (id)query;	// 0x31a0a811
- (id)relativePath;	// 0x31a955bd
- (id)relativeString;	// 0x31a27451
- (oneway void)release;	// 0x319f6855
- (id)resourceSpecifier;	// 0x31a2a645
- (id)retain;	// 0x319f67ed
- (unsigned)retainCount;	// 0x31a94ccd
- (id)scheme;	// 0x319f17a1
- (id)standardizedURL;	// 0x31a95295
- (id)user;	// 0x31a28245
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x31a96011
- (id)URLByAppendingPathComponent:(id)component;	// 0x31a9615d
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x31a30fc1
- (id)URLByAppendingPathExtension:(id)extension;	// 0x31a962b9
- (id)URLByDeletingLastPathComponent;	// 0x31a9627d
- (id)URLByDeletingPathExtension;	// 0x31a9633d
- (id)URLByResolvingSymlinksInPath;	// 0x31a9643d
- (id)URLByStandardizingPath;	// 0x31a96379
- (id)lastPathComponent;	// 0x31a9610d
- (id)pathComponents;	// 0x31a960e5
- (id)pathExtension;	// 0x31a96135
@end

@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a96501
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x31a9f519
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x31a9f4fd
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x31a9f629
- (BOOL)_web_isJavaScriptURL;	// 0x31a9fe35
- (id)_web_scriptIfJavaScriptURL;	// 0x31a9fb8d
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x31a9fbf1
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x31aa033d
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x31aa02f1
- (id)_URLByEscapingSpacesAndControlChars;	// 0x31aa018d
- (id)_hostString;	// 0x31aa0429
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x31a9fe5d
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x31a9ff95
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x31aa004d
@end
