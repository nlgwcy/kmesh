//go:build docgen
// +build docgen

/*
 * Copyright The Kmesh Authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package main

import (
	"kmesh.net/kmesh/ctl/common"
	"kmesh.net/kmesh/ctl/doc/md"
)

func main() {
	rootCmd := common.GetRootCommand()
	rootCmd.DisableAutoGenTag = true

	md.GenMarkdownTree(rootCmd, "../../docs/ctl")
}
