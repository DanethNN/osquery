
/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

// Sanity check integration test for kva_speculative_info
// Spec file: specs/windows/kva_speculative_info.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class kvaSpeculativeInfo : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(kvaSpeculativeInfo, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from kva_speculative_info");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {"kva_shadow_enabled", IntType}
  //      {"kva_shadow_user_global", IntType}
  //      {"kva_shadow_pcid", IntType}
  //      {"kva_shadow_inv_pcid", IntType}
  //      {"bp_mitigations", IntType}
  //      {"bp_system_pol_disabled", IntType}
  //      {"bp_microcode_disabled", IntType}
  //      {"cpu_spec_ctrl_supported", IntType}
  //      {"ibrs_support_enabled", IntType}
  //      {"stibp_support_enabled", IntType}
  //      {"cpu_pred_cmd_supported", IntType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
